#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int k, n, a[20];
vector<int> b;
vector<vector<int>> c;
void Try(int pos, int num){
	if(num == k){
		//for(int i = 0; i < b.size(); i++) cout << b[i]<<" "; cout << endl;
		c.push_back(b);
	}
	for(int i = pos+1; i < n; i++){
		if(num<=k){
			num++;
			b.push_back(a[i]);
			Try(i, num);
			num--;
			b.pop_back();
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		c.clear();
		for(int i = 0; i < n; i++){
			b.clear();
			int num = 1;
			if(num <= k){
				b.push_back(a[i]);
				Try(i, num);
			}
		}
		sort(c.begin(), c.end());
		for(int i = 0; i < c.size(); i++){
			for(int j = 0; j < c[i].size(); j++) cout <<c[i][j]<<" "; 
			cout << endl;
		}
		
	}
}


