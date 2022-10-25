#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005], List_ra[1005];

bool vs[1005], check;
int e[1005], vs1[1005];
int n, m, u, v;
//b1: tim so_TPLT
//b2: loai bo canh va tim lai so_TPLT
void DFS(int u){
	vs[u]=true;
	for(int i = 0; i < List[u].size(); i++){
		if(!vs[List[u][i]]) DFS(List[u][i]);
	}
}
//void DFS2(int u, int v, int s){//loai bo canh(v,s)
//	vs[u]=true;
//	for(int i = 0; i < List[u].size(); i++){
//		if((List[u][i]==v&&u==s)||(List[u][i]==s&&u==v)) continue;
//		if(!vs[List[u][i]]) DFS2(List[u][i], v, s);
//	}
//}
int tplt(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(!vs[i]){
			dem++;
			DFS(i); 
		}
	}
	return dem;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int start, end;
		cin >> n >> m; 
		for(int i = 0; i < 1005; i++) List[i].clear();
		memset(vs, false, sizeof(vs));
		vector <pair<int, int>> List_ds_canh;
		for(int i = 0; i < m; i++){
			cin >> u >> v;
			List[u].push_back(v);
			List[v].push_back(u);
			List_ds_canh.push_back({u, v});
		}
		int so_TPLT = tplt();
		int dem = 0;
//		for(auto i: List_ds_canh){ //xet tung canh
//			memset(vs, false, sizeof(vs));
//			int v = i.first, s = i.second;
//			dem = 0;
//			for(int j = 1; j <= n; j++){
//				if(!vs[j]){
//					dem++;
//					DFS2(j, v, s);
//				} 
//			}
//			if(dem > so_TPLT){
//				if(v>s) cout << s <<" "<<v<<" ";
//				else cout << v<<" "<<s<<" ";
//			}
//		}
		for(int i = 1; i <= n; i++){
			memset(vs, false, sizeof(vs));
			vs[i]=true;
			dem = tplt();
			if(dem > so_TPLT){
				cout <<i<<" ";
			}
		}
		cout << endl;
	}
}


