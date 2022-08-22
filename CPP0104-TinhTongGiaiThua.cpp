#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,tmp,sum=0;
	cin >> n;
	for(long long i=1;i<=n;i++){
		tmp=1;
		for(long long j=1;j<=i;j++)
			tmp*=j;
		sum+=tmp;
	}
	cout << sum;
}

