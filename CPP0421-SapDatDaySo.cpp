#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	
	while(t--){
		cin >> n;
		long long x;
		map <long long,int> m;
		for(int i=0;i<n;i++){
			cin >> x;
			m[x]=1;
		}
		for(int i=0;i<n;i++)
			if(m[i])
				cout << i<<" ";
			else
				cout << "-1 ";
		cout <<"\n";
	}
}

