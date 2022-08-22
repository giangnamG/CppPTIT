#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n%2==0){
			while(n%2==0){
				cout <<"2 ";
				n/=2;
			}
		}
		for(int i=3;i<=sqrt(n);i+=2){
			while(n%i==0){
				cout <<i<<" ";
				n/=i;
			}
		}
		if(n>1)
			cout << n;
		cout <<endl;
	}

}

