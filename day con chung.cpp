#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        long long a[n+1], b[m+1], c[k+1];
        vector<long long> ans;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        for(int i = 0; i < k; i++) cin >> c[i];
        int i = 0, j = 0, h = 0;
        while(i < n && j < m && h < k){
        	if(a[i]==b[j] && a[i] == c[h] && b[j] == c[h]){
        		ans.push_back(a[i]);
        		i++; j++; h++;
			}
			else if(a[i] < b[j]) i++;
			else if(b[j] < c[h]) j++;
			else h++;
		}
        if (ans.size() == 0)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}
/*
1
6 5 8 
1 5 10 20 40 80
5 7 20 80 100
3 4 15 20 30 70 80 120
1 < 5 i=1

*/
