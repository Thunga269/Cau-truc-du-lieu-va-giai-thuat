#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
void solve(){
	int n, k, x;
	cin >> n >> k;
	int a[n+1];
	map<int, int> b;
	map<int, int>::iterator itr;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		x = abs(a[i] - k);
		for(int j = 0; j < n; j++)
			//if()
		b.insert(pair<int, int>(a[i], x));
	}
	//for(int i = 0; i < n; i++)
	for (itr = b.begin(); itr != b.end(); itr++) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
	
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}

