#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int a;
	int z = 0;
	cin >> a;
	vector<vector<int>> b(a,vector<int>(2));
	for(int i = 0;i<a;i++){
		for(int j = 0;j<2;j++){
			cin >> b[i][j];
		}
	}

	for(int i = 0; i < a; i++){
		for(int j = 0; j < ceil((b[i][1] - b[i][0] + 1)/2); j++){
			if(s[b[i][0] + j] == s[b[i][1] - j]){
				z = 1;
			}else{
				z = 0;
				break;
			}
		}
		for(int j = b[i][0];j<b[i][1];j++){
			cout << s[j];
		}
		cout << ": ";
		if(z){
			cout << "Yes";}else{cout << "No";}
		cout << "\n";
	}
}