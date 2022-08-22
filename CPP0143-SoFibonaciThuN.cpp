#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n==2)
			cout <<"1\n";
		else{
			n-=2;
			long long f0=1;
			long long f1=1;
			long long f2;
			while(n--){
				f2=f1+f0;
				f0=f1;
				f1=f2;
			}
			cout << f2<<"\n";
		}
	}
}

