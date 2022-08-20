#include<bits/stdc++.h>
using namespace std;
int main(){
	double sum=1;
	int n;
	cin >> n;
	for(int i=2;i<=n;i++)
		sum+=1.0/i;
	cout <<fixed<<setprecision(4)<< sum;

}

