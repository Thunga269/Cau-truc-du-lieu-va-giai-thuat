#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, 0));
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        s += ' ';
        int k = 0;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= '0' && s[j] <= '9')
                k = k * 10 + s[j] - '0';
            else
            {
                a[i][k] = a[k][i] = 1;
                k = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
