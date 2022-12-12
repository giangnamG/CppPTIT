#include<bits/stdc++.h>
using namespace std;
intgetSum(int a[],int l,int r){
	int sum = 0;
	for(int i=l-1;i<r;i++)
		sum += a[i];
	return sum;
}
int main(){
	int t,n,q,l,r,a[10001];
	cin >> t;
	while(t--){
		cin >> n >> q;
		for(int i=0;i<n;i++)
			cin >> a[i];
		for(int i=0;i<q;i++){
			int x,y;
			cin >> x>> y;
			cout << getSum(a,x,y)<<endl;
		}
	}

}

