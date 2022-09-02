#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	int a[100001];
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
			cout << a[i] <<" ";
		cout << endl;
	}
}

