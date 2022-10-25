#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
	int t, a, n; string s;
	cin >> t;
	while(t--){
		queue <int> q;
		cin >> n;
		while(n--){
			cin >> a;
			if(a == 1) cout << q.size()<<endl;
			else if (a == 2){
				if(q.empty()) cout <<"YES"<<endl;
				else cout << "NO"<<endl;
			}else if(a == 3){
				int b;
				cin >> b;
				q.push(b);
			}else if(a == 4){
				if(!q.empty()) q.pop();
				
			}else if(a == 5){
				if(!q.empty()) cout << q.front() <<endl;
				else cout << -1<<endl;
			}else{
				if(!q.empty()) cout << q.back() <<endl;
				else cout << -1<<endl;
			}
		}
	}
}


