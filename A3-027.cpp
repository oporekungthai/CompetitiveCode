#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    char x[a][b];
    for (int i = 0; i < a; i++) {
        for (int o = 0; o < b; o++) {
            cin >> x[i][o];
        }
    }
    for (int i = 0; i < a; i++) {
        for (int o = 0; o < b; o++) {
            if (i == 0) {
                cout << x[i][o] << " ";
            } else {
                if (x[i - 1][o] == '*') {
                    cout << "*";
                } else {
                    cout << x[i][o];
                }
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}