#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		cout << a[k-1]<<"\n";
	}

}

