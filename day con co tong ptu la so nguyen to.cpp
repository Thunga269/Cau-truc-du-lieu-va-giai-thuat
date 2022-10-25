#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n;
int a[30];
vector <int> b;
vector <vector<int>> c;
int snt(int k){
	if(k < 2) return 0;
	for(int i = 2; i <= sqrt(k); i++){
		if(k%i==0) return 0;
	}
	return 1;
}
void Try(int pos, int sum){
	if(snt(sum)==1){
		//for(int i = 0; i < b.size(); i++) cout << b[i]<<" ";cout << endl;
		c.push_back(b);
	}
	for(int i = pos+1; i < n; i++){
			sum += a[i];
			b.push_back(a[i]);
			Try(i, sum);
			sum -= a[i];
			b.pop_back();
	}
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n, greater<int>());
		c.clear();
		for(int i = 0; i < n; i++){
			b.clear();
			b.push_back(a[i]);
			Try(i, a[i]);
		}
		sort(c.begin(), c.end());
		for(int i = 0; i < c.size(); i++){
			for(int j = 0; j < c[i].size(); j++) cout << c[i][j]<<" ";
			cout << endl;
		}
	}
}



