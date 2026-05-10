#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of blocks: ";
    cin >> n;

    string data[10];

    cout << "Enter binary blocks:\n";
    for(int i = 0; i < n; i++)
        cin >> data[i];

    cout << "\nVRC Output:\n";

    for(int i = 0; i < n; i++) {

        int count = 0;

        for(int j = 0; j < data[i].size(); j++)
            if(data[i][j] == '1')
                count++;

        if(count % 2 == 0)
            cout << data[i] << "0" << endl;
        else
            cout << data[i] << "1" << endl;
    }

    return 0;
}