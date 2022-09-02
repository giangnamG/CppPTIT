#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		int max=INT_MIN;
		int min=INT_MAX;
		cin >> n >> m;
		int x;
		for(int i=0;i<n;i++){
			cin >> x;
			max = max > x? max : x;
		}
		for(int i=0;i<m;i++){
			cin >> x;
			min = min > x? x : min;
		}
		cout << (long long)min*(long long)max<<"\n";
		
	}

}

