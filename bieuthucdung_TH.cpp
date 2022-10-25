#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	scanf("\n");
	getline(cin, s);
	string ss = s;
	int dem = 0, index = 0, max = 0;
	vector <char> sss;
	vector <int> aaa;
	for(int i = 0; i <= s.size(); i++){
		if(s[i] == '(' ){
			sss.push_back(s[i]);
			aaa.push_back(index++);
			max = index > max ? index : max;
		} 
		if(s[i] == ')' && sss[sss.size() - 1] == '('){
			sss.pop_back();
			aaa.pop_back();
			index--;
		}
	}
	if(sss.size() != 0) cout << -1;
	else
	cout << max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}/*
3
(((())))()()(A)
(((((((B))((((D)))))
((()
*/



