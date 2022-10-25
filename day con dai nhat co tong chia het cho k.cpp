#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void solve(){
	int n, k, x;
	cin >> n>>k;
	int d[n+1][k];//do dai day con co tong j+k, chay tu x1-> xn
	d[0][0]=0;
	for(int i = 1; i < k; i++) d[0][i]=-1005;//chon 0 phan tu, tong thu i = -1005
	for(int i = 1; i <= n; i++){
	 	cin >> x;
	 	x%=k;
		for(int j = 0; j < k; j++)//phan du cua k
			d[i][j]= max(d[i-1][j],  d[i-1][(j+k-x)%k]+1 );
	}
	cout << d[n][0];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


