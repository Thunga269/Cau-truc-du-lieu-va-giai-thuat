#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void solve(){
	string s; cin >> s;
	stack<int>st;
	int n = s.size();
	for(int i = 0; i <= n; i++){
		if(s[i]=='I'||i==n){
			cout << i+1;//in tang
			while(st.size()){
				cout << st.top(); st.pop();//in theo chieu giam
			}
		}else if(s[i]=='D') st.push(i+1);
	}
}
/*
DDIDDIID
push(1) push(2)
cout << 321
push(4) push(5)
cout << 654
321654798
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


