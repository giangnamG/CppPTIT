#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	long long n;
	while(t--){
		cin >> n;
		int res=n%10;
		n/=10;
		int check=0;
		while(n>0){
			if(abs(n%10-res)!=1){
				check=1;
				break;
			}
			res=n%10;
			n/=10;
		}
		!check ? cout << "YES" : cout << "NO";
		cout << endl;
	}

}

