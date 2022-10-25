#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005];

int main(){
	int t, n, m, u, v, i, j;
	cin >> t;
	while(t--){
		for(i = 0; i<1005;i++) List[i].clear();
		cin >> n >> m;
		for(i = 1; i <= m; i++){
			cin >> u >> v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		for(i = 1; i <= n; i++){
			cout << i <<": ";
			for(j = 0; j < List[i].size(); j++) cout << List[i][j]<<" ";
			cout << endl;
		}
	}
}


