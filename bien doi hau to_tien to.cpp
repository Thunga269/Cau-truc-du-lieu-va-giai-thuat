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
	string s;
	cin >> s;
	stack <string> st;
	for(int i = 0; i < s.size(); i++){
		if(check(s[i])){
			string k = st.top(); st.pop();//B
			k= st.top()+k; st.pop();//A
			k = s[i]+k; //+AB
			st.push(k);
		}else{
			st.push(string(1, s[i]));
		}
	}
	cout << st.top();
}
/*

AB+CD-*
*+AB-CD
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


