#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char s[1001];
		cin.getline(s,111);
		int m[100]={0};
		for(int i=0;i<strlen(s);i++)
			m[s[i]]++;
		int check[100]={0};
		for(int i=0;i<strlen(s);i++)
			if(!check[s[i]]){
				cout << s[i]<<m[s[i]];
				check[s[i]]=1;
			}
		cout << endl;
	}

}

