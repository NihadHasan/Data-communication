#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of blocks: ";
    cin >> n;

    vector<string> data(n);

    cout << "Enter binary blocks:\n";
    for(int i = 0; i < n; i++)
        cin >> data[i];

    string lrc = "";

    for(int j = 0; j < data[0].size(); j++) {
        int count = 0;

        for(int i = 0; i < n; i++)
            if(data[i][j] == '1')
                count++;

        lrc += (count % 2 == 0) ? '0' : '1';
    }

    cout << "LRC = " << lrc << endl;

    // Result Check (added part)
    string received;
    cout << "Enter received LRC: ";
    cin >> received;

    int error = 0;

    if(received != lrc)
        error = 1;

    cout << "Result = " << error;

    return 0;
}