#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void solve(string s){
	stack <int> st;
	st.push(-1);
	int m = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i]=='(') st.push(i);
		else{
			st.pop();//loai bo het xau dung
			if(st.size()){
				m = max(m, i-st.top());
			}
			else{
			 	st.push(i);//luu lai gtri khoi dau
			}
		}
	}
	cout << m;
}
/*
()(()))))
(): m=1-(-1)=2
push(0)

*/
int main(){
	int t; string s;
	cin >> t;
	while(t--){
		cin >> s;
		solve(s);
		cout << endl;
	}
}


