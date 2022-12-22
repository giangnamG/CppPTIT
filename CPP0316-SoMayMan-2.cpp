#include<bits/stdc++.h>
using namespace std;

void process(){
	string s;
	cin >> s;
	int n= s.length();
	int a[n];
	for(int i=0;i<n;i++)
		a[i] = s[i]-'0';
	while(n>1){
		int sum = 0;
		for(int i=0;i<n;i++)
			sum += a[i];
		int cnt = 0;
		int b[100];
		while(sum>0){
			b[cnt++] = sum%10;
			sum/=10;
		}
		int k=0;
		for(int i=cnt-1;i>=0;i--)
			a[k++]=b[i];
		n = cnt;
	}
	if(a[0]==9)
		cout <<"1\n";
	else 
		cout <<"0\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		process();
	}

}

