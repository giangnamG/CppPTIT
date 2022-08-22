#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
int main(){
	int t,a,b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a>b){
			int tmp = a;
			a = b;
			b = tmp;
		}
		if(a==1)
			a=2;
		if(a%2==0){
			if(a==2)
				cout << a <<" ";
			a += 1;		
		}
		for(int i=a;i<=b;i+=2){
			if(isPrime(i))
				cout <<i<<" ";
		}
		cout << endl;
		
	}
}

