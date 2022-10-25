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
	int ok = 0;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			int l = lower_bound(a+j+1, a+n, k-a[i]-a[j])-a;//>=
			//int r = upper_bound(a+j+1, a+n, k-a[i]-a[j])-a;
			//cout << l <<" "<<r<<endl;
			if(a[l]==k-a[i]-a[j]){
				ok = 1;
				break;
			}
//			if(a[r]>k-a[i]-a[j]) r--;
//			dem += r-l+1;
		}
		if(ok) break;
		
	}
	if(ok)cout << "YES";
	else cout << "NO";
}
/*
1
8 22
1 4 15 6 10 8 15 18
1 4 6 8 10 15 15 18
22-1-4=17
22-1-6=15 -> x = 5
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


