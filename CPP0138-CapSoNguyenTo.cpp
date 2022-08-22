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
		if(isprime(n-2)){
			cout <<"2 "<<n-2<<"\n";
		}else
			for(int i=3;i<=n;i+=2)
				if(isprime(i)&&isprime(n-i)){
					cout << i <<" "<<n-i<<"\n";
					break;
				}
	}

}

