#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int d[105][105] = {0};//so phep bien doi it nhat de bien doi i ki tu s1 --> j ki tu s2
int qhd(string s1, string s2){
	int i, j, n = s1.length(), m = s2.length();
	for(int i = 0; i <= n; i++)
		for(int j =0; j<=m; j++){
			if(i==0||j==0) d[i][j]=i+j;
			else if(s1[i-1]==s2[j-1]) d[i][j]=d[i-1][j-1];
			else d[i][j]=min(d[i-1][j-1], min(d[i-1][j], d[i][j-1]))+1;
		}
	return d[n][m];
}
int main(){
	int t; string s1; string s2;
	cin >> t;
	while(t--){
		cin >> s1 >> s2;
		cout << qhd(s1, s2)<<endl;
	}
}



