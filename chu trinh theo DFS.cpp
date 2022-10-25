#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005];
bool vs[1005];
int e[1005];
int n, m, u, v, ok = 0;
vector <int> a;
void DFS(int u, int parent){
	vs[u]=true;
	for(int i = 0; i < List[u].size(); i++){
		if(!vs[List[u][i]]&&!ok){
			e[List[u][i]]=u;
			DFS(List[u][i], u);
		} 
		else if(List[u][i]!=parent){
			v = List[u][i];
			ok =1;
		}
	}
}
void Trace(){
	int t=v;
	a.push_back(1);
	while(t>0){
		a.push_back(t);
		t = e[t];
	}
	
	for(int i = a.size()-1; i >= 0; i--) cout << a[i]<<" ";

}

int main(){
	int t;
	cin >> t;
	while(t--){
		ok = 0;
		for(int i = 0; i < 1005; i++) List[i].clear();
		memset(vs, false, sizeof(vs));
		memset(e, 0, sizeof(e));
		a.clear();
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			cin >> u >> v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		DFS(1, 0);
		if(ok){
			Trace();
		}else cout <<-1;
		cout << endl;
	}
}


