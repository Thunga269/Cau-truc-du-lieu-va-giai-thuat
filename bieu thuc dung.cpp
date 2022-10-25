#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        int k = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.size() == 0)
                st.push(s[i]);
            else if (st.top() == '[' && s[i] == ']')
            {
                st.pop();
                k += 2;
            }
            else if (st.top() == ']' && s[i] == '[')
            {
                ans += st.size() + k; cout << st.size() <<" "<<k<<"|";
                st.pop();
            }
            else if (s[i] == '[')
                st.push(s[i]);
            else if (st.top() == ']' && s[i] == ']')
                st.push(s[i]);
            if (st.size() == 0)
                k = 0;
        }
        cout << ans << endl;
    }
}
/*

[]][][
push([)
pop([) k = 2
push(]) 
top = ] && s[3] = [ -> ans += 1 + 2 = 3 st.pop([)
push(])

*/
