#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
	if(n<2)
		return false;
	for(long long i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}
void process(){
	long long n;
	cin >> n;
	int check = 0;
	for(int i=2;i<20;i++){
		if(isPrime(i) && isPrime(pow(2,i)-1)){
			if(pow(2,i-1)*(pow(2,i)-1)==n)
				check = 1;
		}
	}
	!check ? cout << "0\n" : cout <<"1\n";
}
int main(){
	int t;
	cin >> t;
	while(t--)
		process();
}
