#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n, k, a[101][101]={}, sum = 0;

int main(){
	cin >> n >> k;
	int b[n+1];
	vector <int> c(n+1, 0);
	vector<vector<int>> ans;
	for(int i = 1; i <= n; i++) 
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	for(int i = 1; i <= n; i++) b[i]=i; //sinh hoan vi cua n de tim cac vi tri 
	while(1){
		int ok = 0;
		sum = 0;
		for(int i = 1; i <= n; i++) {
			sum += a[i][b[i]];
		}
		if(sum == k){
			for(int i = 1; i <= n; i++) c[i]=b[i];
			ans.push_back(c);
		}
		//sinh hoan vi n phan tu
		int j = n-1;
		while(j > 0 && b[j] > b[j+1]){
		j--; //so sau > so truoc thi stop
		ok = 1;
		}
		if(j == 0) break;
		int h = n;
		while(b[h] < b[j]) h--; //tim so lon nhat dau tien: so sau lon hon so b[j] dau tien thi stop
		swap(b[j], b[h]);
		sort(b+j+1, b+n+1);
	}
	cout << ans.size()<<endl;
	sort(ans.begin(), ans.end());
	for(int i = 0; i < ans.size(); i++){
		for(int j = 1; j <= n; j++) cout << ans[i][j] <<" ";
		cout << endl;
	}
}
//3 10
//2 4 3
//1 3 6
//4 2 4

//2 3 4
//2 6 2
//4 1 4
//4 6 4
//3 1 2
//3 3 4

//a[1][1]+a[2][2]+a[3][3]
//a[1][1]+a[2][3]+a[3][2]
//a[1][2]+a[2][1]+a[3][3]
//a[1][2]+a[2][3]+a[2][1]


