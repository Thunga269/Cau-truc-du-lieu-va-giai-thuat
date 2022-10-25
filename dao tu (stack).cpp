#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
stack <string> x;
void tach(string s){
	string s1;
	stringstream ss(s);
	while(ss >> s1){
		x.push(s1);
	}
}
main(){
	int t; string s;
	cin >> t;
	while(t--){
		//stack <string> x;
		scanf("\n");
		getline(cin, s);
		tach(s);
		while(!x.empty()){
			cout << x.top()<<" "; x.pop();
		}
		cout << endl;
	}
}


