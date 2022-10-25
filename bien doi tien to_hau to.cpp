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
	string s; cin>> s;
	string k;
	stack <string> st;
	for(int i = s.length()-1; i >= 0; i--){
		if(check(s[i])){
			k = st.top(); st.pop();//C
			k+= st.top(); st.pop();//D
			k += s[i];//CD-
			st.push(k);
			//CD-
			//AB+
			//AB+CD-*
		}else{
			st.push(string(1, s[i]));//push cac chu cai
		}
	}
	cout << st.top();
}
//*+AB-CD
//AB+CD-*
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


