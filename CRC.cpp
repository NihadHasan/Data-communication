#include <iostream>
using namespace std;

string crc(string data, string key)
{
    for (int i = 0; i <= data.size() - key.size(); i++)
    {
        if (data[i] == '1')
        {
            for (int j = 0; j < key.size(); j++)
            {
                if (data[i + j] == key[j])
                    data[i + j] = '0';
                else
                    data[i + j] = '1';
            }
        }
    }

    return data.substr(data.size() - key.size() + 1);
}

int main()
{
    string data, key;

    cout << "Enter data: ";
    cin >> data;

    cout << "Enter key: ";
    cin >> key;

    string rem =
        crc(data + string(key.size()-1, '0'), key);

    string codeword = data + rem;

    cout << "\nRemainder: " << rem << endl;
    cout << "Codeword: " << codeword << endl;

    string received;

    cout << "\nEnter received codeword: ";
    cin >> received;

    string check = crc(received, key);

    cout << "Receiver Remainder: " << check << endl;

    if (check == string(key.size()-1, '0'))
        cout << "No Error Detected";
    else
        cout << "Error Detected";
}