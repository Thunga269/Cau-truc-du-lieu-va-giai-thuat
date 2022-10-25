#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
    	int s, t;
    	cin >> s>> t;
    	pair <int, int> u; //luu so lan tinh toan
    	map <int, int> m; //truy cap den gia tri co ton tai hay chua
    	queue <pair<int, int>> q;
    	u.first=s;
    	u.second=0;
    	q.push(u);
    	while(!q.empty()){
    		u = q.front(); 
			q.pop(); 
    		if(u.first==t){
    			cout << u.second<<endl;
    			break;
			}
			if(u.first>1 && !m[u.first-1]){
				m[u.first-1]++;
				//cout << u.first<<" ";
				q.push({u.first-1, u.second+1});
			}
			if(u.first<=t && !m[u.first*2]){
				m[u.first*2]++;
				q.push({u.first*2, u.second+1});
			}
		}
	}
        
}
/*
2 5
pair: 2-0
q.push((2,0))
if(2<=5 && m[2*2]==0) m[2*2]=1; q.push((4,1))
if(2>1 && m[2-1]==0) m[2-1]=1; q.push((1,1))
u = (4,1) if(4 <=5 && m[4*2]==0) m[4*2]=1; q.push((8,2))
			if(4>1 && m[4-1]==0) m[4-1]=1; q.push((3,2))
u = (1,1) if(1 <=5 && m[1*2]==0) m[1*2]=1; q.push((2,2))
u = (8,2) if(8>1 && m[8-1]==0) m[8-1]=1; q.push((7,3))
u = (3,2) if(3<=5 && m[3*2]==0) m[3*2]=1; q.push((6,3))
			if(3>1&& m[3-1]==0) m[3-1]=1; q.push((2,3))
u = (2,2)..; u= (7,3)..
u = ((6,3)) if(6>1 && m[6-1]==0) m[6-1]=1; q.push((5,4))
*/
