#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int check=0;
		while(n>0){
			if(n%10!=6 && n%10!=8 && n%10!=0)
				check = 1;
			n/=10;
		}
		!check ? cout <<"YES" : cout <<"NO";
		cout <<endl;
	}

}

