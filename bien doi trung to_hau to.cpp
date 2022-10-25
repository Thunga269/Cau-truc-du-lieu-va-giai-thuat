#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//trungto-hauto: push('(') va push(toan tu)
string kt = "+-*/^";
int toan_tu(char c){
	for(int i = 0; i < kt.size(); i++){
		if(kt[i]==c) return 1;
	}return 0;
}
bool toan_hang(char c){
	return ((c >= 'a'&&c<='z')||c>='A'&&c<='Z');
}
int deg(char c){
	if(c=='^') return 5;
	if(c=='*'||c=='/') return 4;
	if(c=='+'||c=='-') return 3;
	return 2;
}
void solve(){
	string s, k;
	cin >> s;
	stack <int> st;
	for(int i = 0; i < s.size(); i++){
		if(s[i]=='(') st.push(s[i]);
		else if(toan_hang(s[i])) k+= s[i];
		else if(s[i]==')'){
			while(st.size()&&st.top()!='('){
				k+=st.top(); st.pop();//k+=toantu
			}
			st.pop();//pop('(')
		}else if(toan_tu(s[i])){
			while(st.size()&&deg(st.top())>=deg(s[i])){
				k+=st.top();st.pop();
			}
			st.push(s[i]);
		}
	}
	while(st.size()){
		if(st.top()!='(') k+=st.top(); //chi cong toan_tu
		st.pop();
	}
	cout << k;
}
/*
(D+(A*B)+C)  
DAB*+C+
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


