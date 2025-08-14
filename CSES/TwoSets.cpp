#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin >> a;
    long long int b;
    b = (a*(a+1)*(0.5));
    long long int d = 0;
    if(b%2){
        cout << "NO";
    }else{
        b = b/2;
        cout << "YES \n";
        vector<vector<long long>> c(a,vector<long long>(2));
        for(long long int i = 0;i<a;i++){
            c[i][0] = i+1;
            c[i][1] = 0;
        }
        for(int i = a;i>0;i--){
            if(b-i>=0){
                c[i-1][1] = 1;
                b = b-i;
                d++;
            }
        }
        cout << d << endl;
        for(int i = 0;i<a;i++){
            if(c[i][1]==1){
                cout << c[i][0] << " ";
            }
        }
        cout << "\n" << a-d << endl;
        for(int i = 0;i<a;i++){
            if(!c[i][1]){
                cout << c[i][0] << " ";
            }
        }
    }


}