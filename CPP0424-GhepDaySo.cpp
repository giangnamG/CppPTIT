#include<bits/stdc++.h>
using namespace std;
void solve(){
	int a[10009];
	int k,n;
	cin >> k >> n;
	for(int i=0;i<k*n;i++)
		cin >> a[i];
	sort(a,a+k*n);
	for(int i=0;i<k*n;i++)
		cout << a[i]<<" ";
	cout <<endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}

}

