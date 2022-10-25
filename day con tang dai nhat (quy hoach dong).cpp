#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void qhd(){
	int n, a[10005], F[10005], kq = 0;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		F[i]=1;
		for(int j = 0; j < i; j++){
			if(a[j]<a[i]){
				F[i] = max(F[i], F[j]+1);
			}
		}
		kq = max(kq, F[i]);
	}
	cout << kq;
}
/*
6
1 2 5 4 6 2
F[0]=1
F[1]=1
	a[0]<a[1]
		F[1] = max(F[1], F[0]+1)=2
F[2]=1
	a[0]<a[2]: 1 < 5
		F[2] = max(F[2], F[0]+1)=2
	a[1]<a[2]: 2 <5
		F[2] = max(F[2], F[1]+1)=3
*/
int main(){
	int t;
	cin >> t;
	while(t--){
		qhd();
		cout << endl;
	}
}


