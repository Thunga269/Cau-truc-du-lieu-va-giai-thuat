#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		vector <int> list[1005];
		int n, m, u, v;
		cin >> n >> m;
		for(int i = 1; i <= m; i++){
			cin >> u >> v;
			list[u].push_back(v);
		}
		for(int i = 1; i <= n; i++){
			cout <<i <<": ";
			for(int j = 0; j < list[i].size(); j++){
				cout << list[i][j]<<" ";
			}
			cout << endl;
		}
		
	}
}
