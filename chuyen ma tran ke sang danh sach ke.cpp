#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
vector <int> List[1005];
int main(){
	int n, x;
	cin >> n;
	for(int i = 0; i <n;i++){
		for(int j = 0; j <n; j++){
			cin >> x;
			if(x == 1) List[i].push_back(j); 
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < List[i].size(); j++) cout << List[i][j]+1 <<" ";
		cout << endl;
	}
}


