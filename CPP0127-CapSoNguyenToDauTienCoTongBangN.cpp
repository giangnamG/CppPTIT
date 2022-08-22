#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int check=0;
		int l,r;
		for(int i=2;i<=n;i++){
			if(isprime(i)&&isprime(n-i)){
				check = 1;
				l = i;
				r = n-i;
				break;
			}
		}
		!check ? cout <<"-1\n" : cout << l <<" "<<r<<"\n";
	}
}

