#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//lay idea tu xau con chung dai nhat
void solve(){
	int n1; cin >> n1;
	string s;
	cin >> s;
	int n = s.size();
	int d[n+1][n+1]={};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(s[i-1]==s[j-1]&&i!=j){
				d[i][j]=d[i-1][j-1]+1;
			}else d[i][j]=max(d[i-1][j], d[i][j-1]);
		}
	}
	cout << d[n][n];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


