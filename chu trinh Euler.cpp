#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005];
bool check[1005];
int n, m, u, v;
void Euler(){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(List[i].size()%2 == 0){
			dem++;
		}
	}
	if(dem == n) cout << "2"; //chu trinh: cac dinh deu bac chan
	else if(dem == n-2) cout << "1"; //duong di: co 2 dinh bac le
	else cout << "0" ;//ko ton tai
}
int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i++) List[i].clear();
		cin >> n >> m;
		for(int i = 0; i < m; i++){
			cin >> u >> v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		for(int i = 1; i <= n; i++){
			cout << i <<": ";
			for(int j = 0; j < List[i].size(); j++) cout << List[i][j]<<" ";
			cout << endl;
		}
		Euler();
		cout << endl;
	}
}


