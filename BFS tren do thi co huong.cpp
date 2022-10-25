#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005];
bool check[1005];
int truoc[1005];
int n, m, u , v, nguon;
void BFS(int u){
	queue <int> q;
	q.push(u);
	check[u] = false;
	while(q.size()> 0){
		int top = q.front(); q.pop();
		cout << top <<' '; 
		for(int i = 0; i < List[top].size(); i++){
			int temp = List[top][i]; //2
			if(check[temp]){
				check[temp] = false;
				q.push(temp); //2 3
			}
		}
	}
}
//1: 2 3
//2: 3 5 6
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> nguon;
		for(int i = 0; i < 1005; i++) List[i].clear();
		memset(check, true, sizeof(check));
		for(int i = 1; i <= m; i++){
			cin >> u >> v;
			List[u].push_back(v);
		}
		BFS(nguon);
		cout << endl;
	}
}


