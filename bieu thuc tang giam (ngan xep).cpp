#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
main(){
	int t, i, n; string s;
	cin >> t;
	while(t--){
		cin >> s;
		n = s.length();
		stack <int> st;
		for(i = 0; i <= n; i++){
			if(s[i] == 'I' || i==n){
				cout << i+1;
				while(!st.empty()){
					cout << st.top(); 
					st.pop();
				}
			}
			else if(s[i] == 'D') st.push(i+1);
		}
		//solve();
		cout << endl;
	}
}


