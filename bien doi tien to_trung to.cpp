#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string c = "+-*/";
int check(char k){
	for(int i = 0; i < c.size(); i++){
		if(c[i]==k) return 1;
	}
	return 0;
}
void solve(){
	string s;
	cin >> s;
	stack<string> st;
	string k;
	for(int i = s.size()-1; i >= 0; i--){
		if(check(s[i])){
			k = '('+st.top(); st.pop();//(C
			k+=s[i];//(C-
			k += st.top()+')'; st.pop();//(C-D)
			st.push(k);
		}else{
			st.push(string(1, s[i]));
		}
	}
	cout << st.top();
}
//*+AB-CD
//((A+B)*(C-D))
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


