#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	int a[1005];
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> a[i];
		sort(a,a+n);
		int u=n-1,v=0;
		for(int i=0;i<n;i++)
			if(i%2==0)
				cout <<a[u--]<<" ";
			else
				cout <<a[v++]<<" ";
		cout << endl;
	}

}

