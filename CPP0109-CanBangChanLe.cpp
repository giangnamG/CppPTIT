#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int l=pow(10,n-1);
	int r=pow(10,n)-1;
	int k=0;
	for(int i=l;i<r;i++){
		int tmp=i;
		int even=0;
		while(tmp>0){
			if(tmp%10%2==0)
				even++;
			else
				even--;
			tmp/=10;
		}		
		if(k==10){
			k=0;
			cout << endl;
		}
		if(even==0){
			cout <<i<<" ";
			k++;
		}
	}
}

