#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int F[1005][1005]={0}, N, M, A[1005], C[1005];
int qhd(){
	int i, j;
	memset(F, 0, sizeof(F));
	for(i = 1; i <= N; i++){
		for(j = 1; j <= M; j++){
			F[i][j] = F[i-1][j];
			if(j >= A[i])
				F[i][j] = max(F[i][j], F[i-1][j-A[i]] + C[i]);
		
		}
	}
	return F[N][M];
}
/*
4  10 //10: weight max                              
A[i]: 6 5 3 7    
C[i]: 5 4 6 5

*/
int main(){
	int t, i;;
	cin >> t;
	while(t--){
		cin >> N >> M;
		for(i = 1; i <= N; i++) cin >> A[i]; //weight
		for(i = 1; i <= N; i++) cin >> C[i]; //value
		cout << qhd()<<endl;
	}
}



