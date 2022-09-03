#include<bits/stdc++.h>
using namespace std;
void solve(){
	int m,n;
	cin >> m >> n;
	vector <int> v;
	int x;
	for(int i=0;i<m+n;i++){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long len=v.size();
	for(int i=0;i<len;i++)
		cout << v[i]<<" ";
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	} 

}

