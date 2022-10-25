#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//ptu dau tien > x
int first_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m]>x){
			res=m; 
			r = m-1;
		}else l = m+1;
	}
	return res;
}
void solve(){
	int n, k;
	cin >> n >> k;
	int a[n+1];
	for(int i = 0; i < n; i++){
	 	cin >> a[i];
	}
	long long ans=0;
	sort(a, a+n);
	//tim so luong cap ptu > k
	for(int i = 0; i < n; i++){
		int l = first_pos(a, i+1, n-1, k-a[i]);
		if(l!=-1) ans += (n-l);
	}
	cout << ans;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


