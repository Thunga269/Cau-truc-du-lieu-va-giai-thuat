#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005];
bool visited[1005];
int n, m, u, v, a;
int e[1005];
vector <pair <int, int>> p;
void BFS(int u){
	queue <int> q;
	q.push(u);
	while(q.size()){
		int k = q.front(); q.pop();
		visited[k] = true;
		for(int i = 0; i < List[k].size(); i++){
			if(!visited[List[k][i]]){
				visited[List[k][i]]=true;
				p.push_back({k, List[k][i]});
				q.push(List[k][i]);
			}
		}
	}
}
void caykhung(int u){
	int dem = 0;
	BFS(u);
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


