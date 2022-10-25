#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int solve(int l, int r, int x, int a[10000]){
	if(l > r) return -1;
	int mid = (l + r) / 2;
	if(a[mid] == x) return mid+1;
	if(a[mid] < x) return solve(mid+1, r, x, a);
	if(a[mid] > x) return solve(l, mid, x, a);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[10000], x;
		cin >> n >> x;
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << solve(0, n-1, x, a);
		//if(p == -1) cout << "NO";
		//else cout << p;
		cout << endl;
	}
}

