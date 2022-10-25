#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n, s, a[100][100], d[100], e[100]; 
int BellmanFord(int u){
	int dem, k, v; 
	for (v=1; v<= n; v++){
		d[v]= a[u][v]; e[v]=u;
	} 
	d[u]= 0; e[u] = 0; 
	int ok= 0; 
	for (dem=1; dem<= n-1; dem++){ 
		int ok= 1; 
		for (v=1; v<=n; v++) 
			for (k=1; k<=n; k++) 
				if (d[v] > d[k] + a[k][v]) { 
					d[v] = d[k] + a[k][v]; 
					e[v] = k; ok= 0;} 
	if (ok== 1) return(1);
	} 
return(0); }

int main(){
	n = 6;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	int v = 6;
	BellmanFord(1);
	for(int i = 1; i <= n; i++) cout << d[i]<<" ";
//		int t = v;
//		while(t>0){ cout << t << " ";t = e[t];}

}
/*
0 1 4 1000 1000 1000
1000 0 1000 2 2 1000
1000 3 0 2 1000 1000
1000 -3 1000 0 1000 2
1000 1000 1000 -2 0 4
1000 1000 1000 1000 1000 0
*/

