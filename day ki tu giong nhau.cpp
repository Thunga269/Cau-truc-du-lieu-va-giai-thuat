#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void solve(){
	int n;
	cin >> n;
	int insert, remove, copy; cin >> insert>>remove>>copy;
	int d[n+1];
	d[0]=0; d[1]=insert;
	for(int i =2; i <= n; i++)
		if(i%2==0) d[i]=min(d[i-1]+insert, d[i/2]+copy);
		else d[i]=min(d[i-1]+insert, d[(i+1)/2]+copy+remove);
	cout << d[n];
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


