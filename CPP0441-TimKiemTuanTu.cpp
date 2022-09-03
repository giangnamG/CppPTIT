#include<bits/stdc++.h>
using namespace std;
int solve(){
	int n,x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
		if(a[i]==x)
			return i+1;
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cout <<solve()<<"\n";
	}

}

