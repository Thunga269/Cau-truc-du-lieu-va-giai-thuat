#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
queue <int> q;
int main(){
	int t, a; string s;
	cin >> t;
	while(t--){
		cin >> s;
		if(s == "PUSH"){
			cin >> a;
			q.push(a);
		}
		else if(s == "POP"){
			if(!q.empty()) q.pop();
		}else if(s == "PRINTFRONT"){
			if(!q.empty()){
				cout << q.front()<<endl;
			}else cout << "NONE"<<endl;
		}
		//solve();
		//cout << endl;
	}
}


