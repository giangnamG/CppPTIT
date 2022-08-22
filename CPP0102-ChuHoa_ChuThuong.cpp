#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	char c;
	cin >> t;
	while(t--){
		cin >> c;
		if(c>='A'&&c<='Z')
			c+=32;
		else
			c-=32;
		cout <<c<<endl;
	}

}

