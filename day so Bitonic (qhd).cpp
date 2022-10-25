#include <bits/stdc++.h>
#define endl "\n"
using namespace std;//so ugly thu i 
void qhd(){
	int n; cin >> n; 
	int a[n+1];
	long long res = 0, d1[n+1]={}, d2[n+1]={} ;//d[i]: tong day con co trai tang dan va phai giam dan
	for(int i = 1; i <= n; i++) cin >> a[i];
	//day con tang dan tu trai sang phai
	for(int i = 1; i <= n; i++){
		d1[i]=a[i];
		for(int j = 1; j< i; j++)
			if(a[i]> a[j]) d1[i]=max(d1[i], d1[j]+a[i]);
	}
	for(int i = n; i>= 0; i--){
		d2[i]=a[i];
		for(int j = n; j>= i; j--)
			if(a[i]>a[j]) d2[i]=max(d2[i], d2[j]+a[i]);
	}
	for(int i = 1; i <= n; i++) res = max(res, d1[i]+d2[i]-a[i]);
	cout << res;
}
int main()
{
	
	int t;
	cin >> t;
	while (t--)
	{
		qhd();
		cout << endl;
	}
}

