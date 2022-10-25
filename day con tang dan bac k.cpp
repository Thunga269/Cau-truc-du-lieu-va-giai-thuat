#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n, k, ans=0; 
int a[10005], b[10005];
void Try(int pos, int len){
	if(len == k){
		//for(int i = 1; i <= len; i++) cout << b[i]<<" "; cout <<endl;
		ans++;
		return;
	}
	for(int i = pos+1; i < n; i++){
		if(a[i] > a[pos]){ //lon hon so ban dau
			b[len+1] = a[i]; //luu lai cac so thoa man do dai
			Try(i, len+1);
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		b[1] = a[0];
		Try(i, 1); //vi tri 0 va do dai n
	}
	cout << ans;
}
/*
6 3
2 5 15 10 22 20
b[0] = a[0] = 2
backtracking(0, 1)
	for i = 0+1=1; i < n
		if(a[1]=5 > a[0]=2)
			b[1+1] = a[i] = 5
			backtracking(1, 1+1=2): 
				for i = 1+1 = 2; i < n 
					if a[2] > a[1] 
						b[3] = a[2] = 15 //2, 5, 15
						backtracking(2, 3)
							pos2 = 3 = k: ans++; return;
					if(a[3] = 10 > a[1] = 5) 
						b[3] = a[3] = 10//2, 5, 10
						backtracking(2, 3)
							pos2 = 3 = k: ans++; return; 
*/


