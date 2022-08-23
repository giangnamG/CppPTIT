#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k){
	int s = 0;
	if(n>k){
		int div = n/k;
		s += (div*(k-1)*k)/2;
		s += (n%k)*(n%k+1)/2;
	}else if(n==k)
		s += (n-1)*n/2;
	else
		s += n*(n+1)/2;
	return s;
}
int main(){
	int t,n;
	long long k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		if(k==solve(n,k))
			cout << "1\n";
		else
			cout <<"0\n";
	}

}

