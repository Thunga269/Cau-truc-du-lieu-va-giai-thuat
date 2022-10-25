#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n, dem;
void solve(){
	pair <int, int> x, k, k1;
	queue <pair<int, int>> q;
	x.first=n; x.second=0;
	q.push(x);
	while(q.size()){
		k = q.front(); q.pop();
		if(k.first==1){
			cout << k.second; break;
		}
		k1.second = k.second+1;
		if(k.first%2==0){
			k1.first = k.first/2;
			q.push(k1);
			
		}if(k.first%3==0){
			k1.first=k.first/3;
			q.push(k1);
		}if(k.first > 1){
			k1.first=k.first-1;
			q.push(k1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		solve();
		//for(int i = 0; i < c.size(); i++) cout << c[i]<<" ";
		cout << endl;
	}
}


