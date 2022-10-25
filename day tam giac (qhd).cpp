#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void solve(){
	int n, res = 0;
		cin >> n;
		int a[n + 1], maxa[n + 1], mina[n + 1];
		maxa[n] = mina[n] = n;
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i = n-1; i>= 0; i--){
			if(a[i]>a[i+1]) mina[i]=mina[i+1];
			else mina[i]=i;
			if(a[i]<a[i+1]) maxa[i]=maxa[i+1];
			else maxa[i]=i;
		}
		for(int i = 1; i<= n; i++)
			res = max(res, mina[maxa[i]]-i+1);//max[vitri2]=vitri4; min[vitri4]=6: dodai: 6-2+1=5
		cout << res << endl;
}
//12 4 78 90 45 23
//i=5: 45>23 mina[5]=mina[6]=6, maxa[5]=5
//i=4: 90>45 mina[4]=mina[5]=mina[6]=6, maxa[4]=4
//i=3: 78<90 mina[3]=3, maxa[3]=maxa[4]=4
//i=2: 4<78 mina[2]=2, maxa[2]=maxa[3]=4
//i=1: 12>4 mina[1]=mina[2]=2, maxa[1]=1

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}


