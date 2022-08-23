#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,d;
	cin >> t;
	while(t--){
		cin >> n >> d;
		d=d%n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=d;i<n;i++)
			cout << a[i]<<" ";
		for(int i=0;i<d;i++)
			cout << a[i]<<" ";
		cout << endl;
	}

}

