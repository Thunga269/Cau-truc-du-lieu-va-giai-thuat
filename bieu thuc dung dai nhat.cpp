#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//tong cac bt dung
// ()(())(
int main(){
	int t;
	cin >> t;
	while(t--){
		string s; cin >> s;
		stack <int> st; 
		int res = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i]=='(') st.push(i);
			else{
				if(st.size()) {
					st.pop(); res+=2;
				}	
			}
		}
		cout << res <<endl;
	}
}
//(()))(()))

