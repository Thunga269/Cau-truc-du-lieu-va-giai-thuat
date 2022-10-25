#include <bits/stdc++.h>
using namespace std;
int LCS(string s1, string s2, string s3)
{
    int F[s1.size() + 1][s2.size() + 1][s3.size() + 1] = {};
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            for (int k = 0; k < s3.size(); k++)
            {
                if (s1[i] == s2[j] && s2[j] == s3[k])
                    F[i + 1][j + 1][k + 1] = F[i][j][k] + 1;
                else
                    F[i + 1][j + 1][k + 1] = max(F[i][j + 1][k + 1], max(F[i + 1][j + 1][k], F[i + 1][j][k + 1]));
            }
        }
    }
    return F[s1.size()][s2.size()][s3.size()];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        string a, b, c;
        cin >> n >> m >> k >> a >> b >> c;
        cout << LCS(a, b, c) << endl;
    }
}

