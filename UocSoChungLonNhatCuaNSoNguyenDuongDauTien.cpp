#include<bits/stdc++.h>
using namespace std;
int ucln(long long a,int b){
	if(b==0)
		return a;
	return ucln(b,a%b);
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long long result = 1;
		for(int i=1;i<=n;i++){
			result = (result*i)/ucln(result,i);
		}
		cout << result <<endl;
	}
}

