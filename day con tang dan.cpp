#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, a[25];
string k;
vector<int> x;
vector<string> v;
vector<vector<int>> ans;
void Try(int pos){
	for(int i = pos + 1; i <= n; i++){
		if(a[i]>a[pos]){
			x.push_back(a[i]);
			if(x.size()>1){
				ans.push_back(x);
			}
			Try(i);
			x.erase(x.end()-1, x.end());
		}
	}
}

int main()
{
    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Try(0);
    for (int i = 0; i < ans.size(); i++)
    {
        k = "";
        for (int j = 0; j < ans[i].size(); j++)
        {
            k += to_string(ans[i][j]);
            k += " ";
        }
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
}
/*
4
6 3 7 11

try(0)
	i = 1 -> n
		i = 1: 6>0
			x.push(6)
		Try(1)
			i = 1-> n
				i = 4: 11>6
					x.push(11)
				x.size() = 2 > 1
					ans.push((6,11))
	
				x.erase(11)	
			x.erase(6)
			
 		i = 2: 3 > 0
 			x.push(3)
 		try(2)
 			i = 1 -> n
 				i = 3: 7 > 3
 					x.push(7)
 				x.size()=2>1
 					ans.push((3,7))
 				try(3)
 					i = 1 -> n
 						i = 4: 11 > 7
 							x.push(11)
 							ans.push((3,7,11))
 							x.erase(11)
 						x.erase(7)
 					x.erase(3)
 			
 			
*/
