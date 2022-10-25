#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n, k, a[101]; vector<int> b; vector<vector<int>> ans;
void ql(int pos, int sum){
	if( sum==k){
		ans.push_back(b);
	}
	for(int i=pos+1; i<= n; i++){
		if(sum+a[i]<=k){
			sum+=a[i];
			b.push_back(a[i]);
			ql(i, sum);
			sum-=a[i];
			b.pop_back();
		}
	}
}
//void qhd(){
//	int d[1001]={};//d[i]: danh dau xem tai i co day con co tong = j hay ko (j tu a[i[-> s)
// d[0]=1;
//	for(int i = 1; i<= n; i++){
//		for(int j = s; j>= a[i]; j--){
//			if(d[j-a[i]]==1) d[j]=1;
//			if(j == s && d[j]==1)
//		}
//	}
//}
int main(){
	int t;
	cin >> t;
	while(t--){
		ans.clear(); b.clear();
		cin >> n>>k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		for(int i = 1; i<= n; i++){
			b.clear();
			if(a[i]<= k){
				b.push_back(a[i]);
				ql(i, a[i]);
			}
		}
		sort(ans.begin(), ans.end());
		if(ans.size()==0) cout << -1;
		else
		for(int i = 0; i<ans.size(); i++){
			cout <<"[";
			for(int j = 0; j<ans[i].size()-1; j++) cout << ans[i][j]<<" ";
			cout << ans[i][ans[i].size()-1]<<"]"<<" ";
			//cout << endl;
		}
		cout << endl;
	}
}


