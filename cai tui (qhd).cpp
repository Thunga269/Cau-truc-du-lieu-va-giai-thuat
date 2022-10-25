#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int F[1005][1005]={0}, weight[1005], val[1005], N, M;
void qhd(){
	/*F[i][j]: gia tri toi da
	i cai tui thu i; 
	j : trong luong cua cai tui thu i
	*/
	cin >> N >> M;
	for(int j = 1; j <= N; j++) cin >> val[j];
	for(int i = 1; i <= N; i++) cin >> weight[i];
	for(int i = 1; i <= N; i++)
		for(int j = 1; j <= M; j++){
			F[i][j] = F[i-1][j];
			if(j >= weight[i])
				F[i][j] = max(F[i][j], F[i-1][j-weight[i]]+val[i]);
		}
	cout << F[N][M];
}
int main(){
	int t=1;
	while(t--){
		qhd();
	}
}


