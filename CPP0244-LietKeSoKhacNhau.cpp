#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	int a[1200]={0};
	cin >> n;
	int max = -1;
	for(int i=0;i<n;i++){
		cin >> x;
		max = x>max?x:max;
		a[x]=1;
	}
	for(int i=0;i<=max;i++)
		if(a[i])
			cout << i<<" ";

}

