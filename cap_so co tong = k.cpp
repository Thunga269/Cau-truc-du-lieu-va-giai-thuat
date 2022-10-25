#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
/*
void solve(){
	int n, k;
	cin >> n >> k;
	int a[n+1];
	map <int, int> m;
	for(int i = 0; i < n; i++){
	 	cin >> a[i];
		m[a[i]]++;
	}
	long long ans = 0;
	for(int i = 0; i < n; i++){
		ans += m[k-a[i]];
		if(a[i]*2==k) ans--;
		
	}
	cout << ans/2;
}*/

int first_pos(int a[], int l, int r, int x){
	int res=-1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m]==x){
		res = m; r = m-1;}
		else if(a[m]>x) r = m-1;
		else l = m+1;
	}
	return res;
}
int last_pos(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m]==x){
			res = m;
			l = m+1;
		}else if(a[m]>x) r=m-1;
		else l=m+1;
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
	for(int i = 0; i < n; i++){
//		int l = lower_bound(a+i+1, a+n-1, k-a[i])-a;
//		int r = upper_bound(a+i+1, a+n-1, k-a[i])-a;
		int l = first_pos(a, i+1, n-1, k-a[i]);//dau tien = k-a[i]
		int r = last_pos(a, i+1, n-1, k-a[i]);
		//cout << l <<" "<<r<<endl;
		if(l!=-1){
			ans += r-l+1;
		}
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


