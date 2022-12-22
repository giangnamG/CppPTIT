#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
void process(){
	string s;
	cin >> s;
	int n = s.length();
	int a[n];
	for(int i=0;i<n;i++)
		a[i] = s[i]-'0';
	int i = n-1;
	for(int k=i-1;k>=0;k--)
		if(a[i]<a[k]){
			swap(a[i],a[k]);
			break;
		}else if(a[i]==a[k])
			i--;
	i = n-1;
	while(a[i]>=a[i-1])
		i--;
	if(i<=0){
		cout <<"-1\n";
		return;
	}
	while(a[0]==0){
		for(int i=0;i<n;i++)
			a[i]=a[i+1];
		n--;
	}
	for(int i=0;i<n;i++)
		cout << a[i];
	cout <<"\n";
}
int main(){
	int t;
	cin >> t;
	while(t--)
		process();

}

