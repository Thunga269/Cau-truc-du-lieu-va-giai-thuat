#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
long long n, k, a[100001], dem=0;

void solve(){
	cin >> n>>k;
	dem=0;
	for(int i = 0; i < n; i++){
	 	cin >> a[i];}
	sort(a, a+n);
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			int x = lower_bound(a+j+1, a+n, k-a[i]-a[j])-a;
			dem+=x-j-1;
		}
	}
	cout << dem;
}
/*
5 12
5 1 3 4 7
1 3 4 5 7
12-1-3=8
X = 4; j = 2 --> dem = 4-2+1=3
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


