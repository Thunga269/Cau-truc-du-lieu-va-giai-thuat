#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int a[1001][1001] = {0};
int main(){
	int t; string s;
	cin >> t;
	cin.ignore();
	for(int i = 1; i <= t; i++){
		//cin.ignore();
		getline(cin, s);
		s += ' ';
		int k = 0;
		for(int j = 0; j < s.size(); j++){
			if(s[j] >= '0' && s[j] <= '9'){
				k = k * 10 + s[j]-'0';
			}else{
				a[k][i] = a[i][k] = 1;
				k = 0; 
			}
		}	
			
	}
	for(int i = 1; i <= t; i++){
		for(int j = 1; j <= t; j++) cout << a[i][j] <<" ";
		cout << endl;
	}
	
}


