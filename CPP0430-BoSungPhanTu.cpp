#include<bits/stdc++.h>
using namespace std;
int solve(){
	int min=INT_MAX;
	int max=INT_MIN;
	int n;
	cin >> n;
	int x;
	map <int,int> m;
	for(int i=0;i<n;i++){
		cin >> x;
		m[x]=1;
		min = x>min?min:x;
		max = x>max?x:max;
	}
	return max-min+1-m.size();
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cout << solve()<<"\n";
	}
}
// 1 2 3 3 6 6 9 
