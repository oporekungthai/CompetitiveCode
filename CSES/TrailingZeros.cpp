#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    long long int a;
    long long int c = 0;
    cin >> a;
    long long int b = 5;
    while(b<=a){
        c = c+ceil(a/b);
        b = b*5;
    }
    cout << c;
}