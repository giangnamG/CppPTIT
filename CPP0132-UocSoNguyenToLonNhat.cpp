#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		long long result;
		if(n%2==0){
			result = 2;
			while(n%2==0)
				n/=2;
		}
		for(int i=3;i<=sqrt(n);i+=2){
			while(n%i==0){
				result = i;
				n/=i;
			}
		}
		if(n>1)
			result=n;
		cout <<result <<endl;
	}

}

