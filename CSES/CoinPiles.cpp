#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long a;
    cin >> a;
    int b,c;
    for(int i = 0;i<a;i++){
        cin >> b >> c;
        if ((b + c) % 3 == 0 && max(b, c) <= min(b, c) * 2) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << "\n";
    }
}