#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	long long k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int s = 0;
		if(n>k){
			int val = n/k;
			s+=(val*(k-1)*k)/2;
			s+=(n%k)*(n%k+1)/2;
		}else if(n==k)
			s+=(n-1)*n/2;
		else
			s+=n*(n+1)/2;
		cout <<s<<endl;
	}
}


