#include <bits/stdc++.h>
using namespace std;
//sinh to hop
int n, k, a[10001];
void sinh(){
	while(1){
		for(int i = 1; i <= k; i++) cout << (char) (a[i]+'A'-1); cout << endl;
		int j = k;
		while(a[j]>= n-k+j && j > 0) j--;
		if(j==0) return;
		a[j]+=1;
		for(int i = j+1; i<= k; i++) a[i]=a[i-1]+1;
	}

}
int main(){
	int t;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		for(int i=1; i<=k; i++) {
			a[i]=i;
		}
		sinh();
	}
	return 0;
}


