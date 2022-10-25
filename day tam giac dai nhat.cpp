#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void solve(){
	int n, x;
	cin >> n; int a[n + 1], maxa[n + 1], mina[n + 1];
	mina[n]=maxa[n]=n;
	for(int i = 1; i <= n; i++)
	 	cin >> a[i];
	for(int i = n-1; i >=0; i--){
		if(a[i]>a[i+1]) mina[i]=mina[i+1];
		else mina[i]=i;
		if(a[i]<a[i+1]) maxa[i]=maxa[i+1];
		else maxa[i]=i;
	}
	int res=0;
	for(int i = 1; i<= n; i++)
		res=max(res, mina[maxa[i]]-i+1);
		cout << res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


