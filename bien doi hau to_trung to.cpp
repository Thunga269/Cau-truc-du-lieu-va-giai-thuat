#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string kt="*+-/";
int check(char c){
	for(int i = 0; i < kt.size(); i++){
		if(kt[i] == c) return 1;
	}
	return 0;
}
void solve(){
	string s, k;
	cin >> s;
	stack <string> st;
	for(int i = 0; i < s.size(); i++){
		if(check(s[i])){
			string k = st.top(); st.pop();
			k = '('+st.top()+s[i]+k+')'; st.pop();
			st.push(k);
		}else{
			st.push(string(1,s[i]));
		}
	}
	cout << st.top();
}
/*
2
ABC++
(A+(B+C)
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


