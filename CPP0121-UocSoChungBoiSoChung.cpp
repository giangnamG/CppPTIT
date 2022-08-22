#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b){
	if(b==0)
		return a;
	return ucln(b,a%b);
}
int main(){
	int t;
	long long a,b;
	cin >> t;
	while(t--){
		cin >> a>> b;
		int u = ucln(a,b);
		long long lcm = (a*b)/u;
		cout << lcm<<" "<<u<<endl;
	}

}

