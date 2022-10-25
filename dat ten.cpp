#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, k; vector<string> a;;
void sinh_to_hop(){
	int d[1001];
	for(int i = 1; i <= k; i++) d[i] = i;
	while(1){
		for(int i = 1; i <= k; i++) cout << a[d[i]]<<" "; cout << endl;
		int j = k;
		while(d[j] >= n - k + j && j > 0) j--;
		if(j == 0) return;
		d[j] += 1;
		for(int i = j+1; i <= k; i++) d[i] = d[j] + (i-j);
	}
}
int main()
{    
    cin >> n >> k;
    string x;
    map<string, int> m;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    for (auto i : m)
        a.push_back(i.first);
    n = a.size();
    a.insert(a.begin(), 1, "");
    sinh_to_hop();
}
