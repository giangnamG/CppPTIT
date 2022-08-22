#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	int a[10001];
	while(t--){
		cin >> n;
		for(int i=2;i<=n;i++)
			a[i]=0;

		for(int i=2;i<=n;i++)
			if(!a[i])
				for(int j=i*i;j<=n;j+=i)
					a[j]=1;
		
		for(int i=2;i<=n;i++)
			if(!a[i])
				cout <<i<<" ";
		cout << endl;
	}

}

