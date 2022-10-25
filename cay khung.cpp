#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005];
bool visited[1005];
int n, m, u, v, a;
int e[1005];
pair <int, int> k;
vector <pair <int, int>> p;
void DFS(int u){
	visited[u]=true;
	for(int i = 0; i < List[u].size(); i++){
		if(!visited[List[u][i]]){
			if(!visited[List[u][i]]) e[List[u][i]] = u;
				p.push_back({u, List[u][i]});
			DFS(List[u][i]);
		}
	}
}
//e[1]=2; e[3]=1; e[4]=3
void caykhung(int u){
	int dem = 0;
	DFS(u);
	for(int i = 1; i <= n; i++){
		if(visited[i]) dem++;
	}
	if(dem == n){
		for(int i = 0; i < p.size(); i++){
				cout << p[i].first << " "<< p[i].second <<" ";
				cout << endl;
			} 
	}else cout << "-1"<<endl;
}
/*
2
4 4 2
1 2
1 3
2 4
3 4
4 2 2
1 2
3 4
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m>>a;
		memset(visited, false, sizeof(visited));
		for(int i = 0; i <1005; i++){
			List[i].clear();
			e[i]=0;
		} 
		p.clear();
		for(int i = 0; i < m; i++){
			cin >> u >> v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		caykhung(a);
		
	}
}


