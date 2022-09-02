#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		vector <long long> v;
		cin >> n;
		long long x,dem=0;
		for(int i=0;i<n;i++){
			cin >> x;
			if(x!=0)
				v.push_back(x);
			else
				dem++;			
		}
		for(int i=0;i<v.size();i++)
			cout << v[i]<<" ";
		for(int i=0;i<dem;i++)
			cout <<"0 ";
		cout << endl;
	}

}

