#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	int maxh = 0;
	int summ = 0;
	int free1 = 0;
	cin >> n;
	vector<int> b(n);
	for(int i = 0;i<n;i++){
		cin >> b[i];
		maxh = max(b[i],maxh);
		summ = summ + b[i];
	}
	for(int i = maxh;i>0;i--){
		for(int j = 0;j<n;j++){
			if(i==1){
				cout << "_";
			}else{
				cout << " ";
			}
			for(int k = 0;k<b[j]*2;k++){
				if(b[j]<i){
					cout << " ";
				}else{
					if(b[j] - (b[j]-i+1) == k){
						cout << "/";
					}else if(b[j] + (b[j]-i) == k){
						cout << "\\";
					}else{
						cout << " ";
					}
				}
			}
		}

		if(i==1){
			cout << "_";
		}else{
			cout << " ";
		}
		cout << endl;
	}
}