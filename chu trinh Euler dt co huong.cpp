#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List_ra[1005], List_vao[1005];
bool check[1005];
int n, m, u, v, dem1 = 0, dem2 = 0, dem3= 0;
void Euler(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(List_ra[i].size()== List_vao[i].size()){
			dem1++;
		}else if(List_ra[i].size()- List_vao[i].size()==1){
			dem2++; //tang so dinh bac le len 1
		}else if(List_ra[i].size()- List_vao[i].size()==-1){
			dem3++;
		}
	}
	if(dem1 == n) cout << "1"; //chu trinh
	//else if(dem2 == 1 && dem3 == 1) cout << "01"; //nua Euler
	else cout << "0"; //ko ton tai
}
int main(){
	int t;
	cin >> t;
	while(t--){
		dem1 = 0, dem2 = 0, dem3= 0;
		for(int i = 0; i < 1005; i++){
			List_ra[i].clear();
			List_vao[i].clear();
		} 
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			cin >> u >> v;
			List_ra[u].push_back(v);
			List_vao[v].push_back(u);
		}
		
		Euler();
		cout << endl;
	}
}


