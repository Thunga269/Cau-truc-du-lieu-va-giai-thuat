#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int n, F[55]={};

int main(){
	//khoi tao
	long long F[55]={};
	F[0]=F[1]=1;
	for(int i = 2; i <= 50; i++){
		for(int j = 1; j <= min(i, 3); j++)
			F[i]=(F[i]+F[i-j]);
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << F[n];
		cout << endl;
	}
}


