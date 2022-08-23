#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n],x,k=0;
		for(int i=0;i<n;i++){
			cin >> x;
			if(x>0)
				a[k++]=x;
		}
		sort(a,a+k);
		int u = 1,check=0;
		for(int i=0;i<k;i++){
			if(a[i]>u){
				check=1;
				cout << u<<"\n";
				break;
			}else if(a[i]==a[i+1])
				continue;
			else 
				u++;
		}
		if(!check)
			cout <<a[k-1]+1<<"\n";
	}

}

