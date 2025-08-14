#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    int a;
    cin >> a;
    int long free;
    for(int long long i = 1;i<a+1;i++){
        free = ((pow(i,2)*(pow(i,2)-1)*(0.5)) - ((4)*(i-1)*(i-2)));
        cout << free << "\n";
    }

}