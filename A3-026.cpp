#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	char x[a][b];
	char y[a][b];
	for(int i = 0;i<a;i++){
		for(int o = 0;o<b;o++){
			cin >> x[i][o];
		}
	}
	for(int i = 0;i<a;i++){
		for(int o = 0;o<b;o++){
			cin >> y[i][o];
		}
	}


	for(int i = 0;i<a;i++){
		for(int o = 0;o<b;o++){
			if(x[i][o] == '-'){
				if(y[i][o] == 'x'){cout << 'x';}else{cout<<'-';}
				
			}else if(x[i][o] == '+'){
				if(y[i][o] == 'x'){
					cout << "*";
				}else{cout << "+";}
			}
		}
		cout << endl;
		
	}
	// cout << endl;
	// for(int i = 0;i<a;i++){
	// 	for(int o = 0;o<b;o++){
	// 		cout << x[i][o];
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;
	// for(int i = 0;i<a;i++){
	// 	for(int o = 0;o<b;o++){
	// 		cout << y[i][o];
	// 	}
	// 	cout << endl;
	// }
}