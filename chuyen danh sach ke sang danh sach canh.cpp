#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n; string s;
	cin >> n;
	vector <int> ke[100];
	cin.ignore();
	for(int i = 1; i <= n; i++){
		getline(cin, s);
		s+=' ';
		int so = 0;
		int j = 0;
		while(j < s.size()){
			if(s[j] >= '0' && s[j] <= '9'){
				so = so * 10 + (int)(s[j] - '0');
			}else if(so > 0){
				ke[i].push_back(so);
				//cout << so <<"/";
				so = 0;
			}
			j++;
		}
	}
	for(int i = 1; i <= n; i++){
		sort(ke[i].begin(), ke[i].end());
	}
	for(int i = 1; i <= n; i++){
		for(int k = 0; k <ke[i].size(); k++){
			if(i < ke[i][k]) cout << i << " "<<ke[i][k] <<endl;
		}
		//cout << endl;
	}
}


