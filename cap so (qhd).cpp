#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

void qhd(){
	int n; cin >> n;
	vector <pair<int, int>> a(n);
	int x, y, d[n+1]={};//d[i] so cap t/m c>b (a, b); c(c,d)
	for(int i = 0; i < n; i++){
		cin >> a[i].first>>a[i].second;
	}
	int res=0;
	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		d[i]=1 ;//luon co 1 cap la chinh no t/m
		for(int j = 0; j < i; j++){
			if(a[i].first>a[j].second) d[i]=max(d[i], d[j]+1);
		}
		res = max(d[i], res);
	}
	cout << res;
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		qhd();
		cout << endl;
	}
}



