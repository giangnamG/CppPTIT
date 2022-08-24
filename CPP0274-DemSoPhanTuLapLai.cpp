#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >>a[i];
		sort(a,a+n);
		int count=0;
		int b[n]={0};
		int flag=0;
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				if(!flag){
					b[i]=1;
					flag=1;
				}
				count++;
			}else
				flag=0;
		}
		for(int i=0;i<n;i++)
			if(b[i])
				count++;
		cout << count<<endl;
	}
// 1 1 1 2 2 2 3 4 5 5 
}

