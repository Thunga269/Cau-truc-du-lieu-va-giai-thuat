#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s, k , ans="";
        cin >> s;
        stack <char> st, dau;
        char c, d;
        for(int i = 0; i < s.size(); i++){
        	if(s[i] == '('){
        		st.push(s[i]);
        		dau.push(s[i-1]); //luu dau ben ngoai ()
			}else if(s[i] == ')'){
				k = "";
				while(st.size()){
					c = st.top(); st.pop();// c la toan hang
					d = st.top(); st.pop();//d la toan tu
					if(dau.top()=='-'){ //xet dau ben ngoai ()
						k = c+k;
						if(d=='-') //xet dau ben trong ()
							k = '+'+k; // d = '+'
						else
							k = '-'+k;// d= '-'
					}else{ //dau + thi giu nguyen
						k = c+k;
						k = d+k;
					}
					if(d =='('){
						for(int j = 1; j < k.size(); j++)
							st.push(k[j]); //ko push '('
						break; //gap '(' break khoi while
					}
				} dau.pop();
			}else st.push(s[i]); 
		}
		while(st.size()){
			ans = st.top() + ans; st.pop();
		}
		cout << ans<<endl;
    }
}
/*
2
a–(b+c)
st.push(a) push(-)
if s[i]='('
	st.push('(')
	ld.push(-)
st.push(b) push(+) push(c)
if s[i]=')'
	c=c
	d=+
	k = b
	if(ld.top()=='-')
		if(d==+)
			k = -c
	c = b
	d = (
	k= (b-c
	for(j = 1; j <2)
		st.push(b, -, c)

*/
