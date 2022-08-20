#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n/10==0)
			cout << n;
		else{
			while(n/10!=0){
				int sum = 0;
				while(n>0){
					sum+=n%10;
					n/=10;
				}
				n = sum;		
			}
			cout << n;
		}
		cout << endl;
	}

}

