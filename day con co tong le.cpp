#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n, a[1005];
vector <int> b;
vector <vector<int>> c;
bool cmp(vector <int> x, vector <int> y){
	return x < y;
}
void Try(int pos, int sum){
	if(sum%2==1){
		//for(int i = 0; i < b.size(); i++) cout << b[i]<<" ";
		c.push_back(b);
	}
	
//	cout << endl;
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
		for(int i=0; i <n; i++) cin >> a[i];
		sort(a, a+n, greater <int> ());
		c.clear();
		for(int i = 0; i < n; i++){
			b.clear(); b.push_back(a[i]);
			Try(i, a[i]);
		}
	
		sort(c.begin(), c.end(), cmp);
		for(int i = 0; i < c.size(); i++){
			if(c[i].size()==1 && c[i][0] %2==0) continue;
			else{
				for(int j = 0; j < c[i].size(); j++)
					cout << c[i][j]<<" ";
				cout << endl;
			}
		}
	}
}


