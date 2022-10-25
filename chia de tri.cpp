#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
long long M = 1e9+7;
//long long luy_thua(long long n, long long k){//tinh n^k
//	if(k==0) return 1;
//	long long x = luy_thua(n, k/2);
//	if(k%2==0) return (x*x)%M;
//	else return n*(x*x%M)%M;
//}
int tih_len(int n){//tinh 2^n
	if(n==0) return 1;
	if(n==1) return 2;
	int x = tih_len(n/2);
	if(n%2==0) return (x*x);
	else return 2*x*x;
}
void gap_doi_day_so(){
	int n, k; cin >> n >> k;
	int len = tih_len(n)/2; //tu 1 den vi tri trung tam 1213 (n=3)
	while(1){
		if(k==1){
			cout << 1; break;
		}
		if(k == len){
			cout << n; break;
		}
		if(k>len){
			k = 2*len-k;
		}
		n--;
		len/=2;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		
		 gap_doi_day_so();
		cout << endl;
	}
}


