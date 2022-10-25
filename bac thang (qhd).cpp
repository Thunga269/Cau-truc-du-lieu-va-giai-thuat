#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int mod = 1e9+7;
void solve(int n, int k){
	int F[100005]={};
	F[0]=1, F[1]=1;
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= min(i, k); j++)
			F[i] = (F[i]+F[i-j])%mod;
	}
	cout << F[n];
}
/*
4 2
for(i = 2-> 4)
	for(j = 0-> 2)
		i = 2: 
		F[2] = F[2]+F[2-1]=1; 
		F[2] = F[2]+F[2-2]=2
		i=3:
		F[3] = F[3]+F[2]=2
		F[3] = F[3]+F[1]=3
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		solve(n, k);
		cout << endl;
	}
}


