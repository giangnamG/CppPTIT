#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n%2==0){
			int count = 0;
			while(n%2==0){
				n/=2;
				count++;
			}
			cout << "2 "<< count <<" ";
		}
		for(int i=3;i<=sqrt(n);i+=2){
			if(n%i==0){
				int count = 0;
				while(n%i==0){
					n/=i;
					count++;
				}
				cout <<i<<" "<<count<<" ";
			}
		}
		if(n>1){
			cout << n <<" 1";
		}
		cout << endl;
	}

}

