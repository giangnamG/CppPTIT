#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int max =-1,x;
		for(int i=0;i<n;i++){
			cin >> x;
			max = x > max ? x:max;		
		}
		cout << max<<endl;
	}

}

