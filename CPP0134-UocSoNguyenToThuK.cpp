#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	int a[10001];
	while(t--){
		cin >> n >> k;
		int u = 0;
		while(n%2==0){
			a[u++]=2;
			n/=2;
		}	
		for(int i=3;i<=sqrt(n);i+=2)
			while(n%i==0){
				a[u++]=i;
				n/=i;
			}
		if(n>1)
			a[u++]=n;
		if(k>u)
			cout <<"-1\n";
		else
			cout << a[k-1]<<"\n";
	}

}
