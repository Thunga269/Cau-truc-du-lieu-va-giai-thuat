#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, k, x, s = 0;
		cin >> n >> k;
		int a[n];
		map<int, int> m;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			m[x]++;
		}
		for (auto i : m)
		{
			if (i.first * 2 == k)
				s += i.second * (i.second - 1);
			else
				s += i.second * m[k - i.first];
		}
		s /= 2;
		cout << s << endl;
	}
}
