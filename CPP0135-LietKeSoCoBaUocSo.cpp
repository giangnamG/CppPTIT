#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin >> t;
	
	while(t--){
		cin >> n;
		int a[1500]={0};
		int m = sqrt(n);
		for(int i=2;i<=m;i++)
			if(!a[i])
				for(int j=i*i;j<=m;j+=i)
					a[j]=1;
		for(int i=2;i<=m;i++)
			if(!a[i])
				if(i*i<=n)
					cout <<i*i<<" ";
		cout << endl;
	}

}

