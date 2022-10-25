#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int OK = 0, number[6], B[6];
void quaylui(int i, int s){
	if(OK) return;
	if(s == 23 && i == 5){
		OK = 1;
		return;
	}
	for(int j = 0; j <5; j++){
		if(B[j] == 0){
			B[j] = 1;
			quaylui(i+1, s + number[j]);
			quaylui(i+1, s * number[j]);
			quaylui(i+1, s - number[j]);
			B[j] = 0;
		}
	}
}
int main(){
	int t, i;
	cin >> t;
	while(t--){
		for(i = 0; i < 5; i++) cin >> number[i];
		OK = 0;
		for(i = 0; i < 5; i++){
			B[i] = 1;
			quaylui(1, number[i]);
			B[i] = 0;
		}
		if(OK) cout << "YES" <<endl;
		else cout << "NO" << endl;
		cout << endl;
	}
}


