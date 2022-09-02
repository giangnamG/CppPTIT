#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin >> s;
	int r=0;
	for(int i=0;i<s.length();i++)
		r=(2*r+(int)(s[i]-48))%5;
	!r ? cout <<"Yes\n" : cout <<"No\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
