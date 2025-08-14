#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s;
	int a,md,mdct,wmd;
	md = 0;
	mdct = 0;
	wmd = 0;
	int freq[26] = {0};
	cin >> s;
	for(char c : s){
		a = c;
		freq[a-65]++;
	}


	for(int i = 0;i<26;i++){
		if(freq[i]%2){
			md = md+1;
			wmd = i+65;
		}else{
			continue;
		}
	}
	if(md > 1){
		cout << "NO SOLUTION";
	}else{
		for(int i = 0;i<26;i++){
			for(int j = 0;j<(freq[i]/2);j++){
				cout << char(65+i);
			}
		}

		if(md == 1) cout << char(wmd);

		for(int i = 25;i>=0;i--){
			for(int j = 0;j<(freq[i]/2);j++){
				cout << char(65+i);
			}
		}

	}
}