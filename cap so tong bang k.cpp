#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while (t--){
    	long long n,k,x,s=0;
    	cin>>n>>k;
    	vector <long long> a(10000,0);
    	for (long long i=0;i<n;i++) {
    		cin>>x;
    		a[x]++;
		}
		for (long long i=0;i<k/2.0;i++) s+=a[i]*a[k-i];
		if (k%2==0) s+=a[k/2]*(a[k/2]-1)/2;
		cout<<s<<endl; 
	}
	return 0;
}




