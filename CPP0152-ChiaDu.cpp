#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,m;
	cin >> t;
	while(t--){
		cin >> a>>m;
		int check = 0;
		for(int i=0;i<m;i++){
			if((a*i)%m==1){
				check = 1;
				cout << i<<endl;
				break;
			}
		}
		if(!check)
			cout <<"-1\n";
	}

}

