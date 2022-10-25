#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;;
		cin >> n >> k;
		int a[n+1], tong=0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			tong += a[i];
		} 

		if(tong % k==1){
			cout << "0";
		}else{
			int s = tong/k; 
			int d[10001]={0};
			d[0]=1;//tong =a[i]-> d[0]=1
			for(int i = 0; i< n; i++){
				for(int j = s; j>= a[i]; j--){
					if(d[j-a[i]]==1) d[j]=1;
				}
			}
			if(d[s]==1) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
}
/*
2
5 3
2 1 4 5 6
5 3
2 1 5 5 6
*/


