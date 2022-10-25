#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
//day con tang dai nhat
int main(){
	int n, m = 0;
	cin >> n; 
	vector <int> a(1001), l(1001, 1);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[j]> a[i] && l[j] < l[i]+1){
				l[j]++;
				m = max(m, l[j]);
			}
		}
	}
	cout << m;
}
/*
1 2 5 4 6 2

*/

