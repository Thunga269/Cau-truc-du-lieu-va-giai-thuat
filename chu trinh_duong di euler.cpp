#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int a[100][100], n, ce[100];
void ceu(int u){
     stack <int> st; st.push(u); int k = 0;
     while(!st.empty()){int top = st.top(), ok= 1;
          for(int v=1; v<=n;v++)
              if(a[top][v]==1){
                     ok = 0; st.push(v);
					 
                     a[top][v]=a[v][top]=0 ; break;}
        
          if(ok==1){k++; ce[k]=top; ; st.pop(); } 
		  }
     for(int i = k; i>0; i--) cout << ce[i]<< " ";
	 }

int main(){
	n = 10;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	ceu(2);
}


