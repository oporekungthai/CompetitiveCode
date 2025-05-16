#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,t1,t2;
    int count1 = 0;
    bool diff = false;
    cin >> a >> b >> c;
    int mine[2][c];
    for(int i =0;i<c;i++){
        cin >> mine[0][i];
        cin >> mine[1][i];  
    }
    for(int i = 0; i<a;i++){
        for(int k = 0; k < b; k++){
            count1 = 0;
            diff = false;
            for(int j = 0;j<c;j++){
                if(abs(i-mine[0][j]) == 0 && abs(k-mine[1][j]) == 0){
                    cout << "x ";
                    diff = true;
                    break;
                }else{
                    if((abs(i-mine[0][j]) == 0 || abs(i-mine[0][j]) == 1) && (abs(k-mine[1][j]) == 0 || abs(k-mine[1][j]) == 1)){
                        count1 = count1+1;
                    }
                }
            }
            if(diff == true){
                continue;
            }else{
                cout << count1 << " ";
            }
        }
        if(i+1!=a){printf("\n");}
    }
}