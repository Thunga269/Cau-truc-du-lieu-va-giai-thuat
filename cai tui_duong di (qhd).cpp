#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int F[1005][1005]={0}, w[1005], val[1005], N, M, path[1005]={0};
void Trace(int i, int j){
	if(i==0) return;
	if(F[i][j]==F[i-1][j]) Trace(i-1, j);
	else{
		Trace(i-1, j-w[i]);
		path[i-1]=i;
	}
}
void qhd(){
	/*F[i][j]: gia tri toi da
	i cai tui thu i; 
	j : trong luong cua cai tui thu i
	*/
	cin >> N >> M;
	for(int j = 1; j <= N; j++) cin >> w[j];
	for(int i = 1; i <= N; i++) cin >> val[i];
	for(int i = 1; i <= N; i++)
		for(int j = 1; j <= M; j++){
			F[i][j] = F[i-1][j];
			if(j >= w[i])
				F[i][j] = max(F[i][j], F[i-1][j-w[i]]+val[i]);
		}
	Trace(N, M)	;
	cout << F[N][M]<<endl;
	for(int i = 1; i <= N; i++) if(path[i]!=0) cout << path[i]<<" ";
}
int main(){
	int t=1;
	while(t--){
		qhd();
	}
}


