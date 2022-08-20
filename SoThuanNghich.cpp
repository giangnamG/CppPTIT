#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[20],tmp[20];
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		int k=0;
		for(int i=strlen(s)-1;i>=0;i--){
			tmp[k++]=s[i];
		}
		tmp[k]='\0';
		if(strcmp(s,tmp)==0)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}	
}

