#include <bits/stdc++.h>
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

    cout << "LRC = " << lrc;

    return 0;
}