#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
 
    long long a, c;
    bool z = false;
    cin >> a;
    vector<vector<long long>> b(a, vector<long long>(2));
    for (long long i = 0; i < a; i++) {
        cin >> b[i][0] >> b[i][1];
    }
    for (long long i = 0; i < a; i++) {
        if (b[i][0] > b[i][1]) {
            z = true;
        }
        if (max(b[i][0], b[i][1]) % 2) {
            c = -1;
        } else {
            c = 1;
        }
        if (z == true) {
            cout << ((max(b[i][0], b[i][1])) * (max(b[i][0], b[i][1]))) - ((max(b[i][0], b[i][1])) - 1) + abs(b[i][0] - b[i][1]) * c;
        } else {
            cout << ((max(b[i][0], b[i][1])) * (max(b[i][0], b[i][1]))) - ((max(b[i][0], b[i][1])) - 1) + ((abs(b[i][0] - b[i][1]) * c) * (-1));
        }
        cout << "\n";
        z = false;
    }
}