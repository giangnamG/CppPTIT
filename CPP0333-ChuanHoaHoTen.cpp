#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[102];
	cin.getline(s,101);
	for(int i=0;i<strlen(s);i++)
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=32;
	vector <string> v;
	char *p = strtok(s," ");
	while(p!=NULL){
		v.push_back(p);
		p=strtok(NULL," ");
	}
	int n = v.size();
	for(int i=0;i<n-1;i++){
		v[i][0]-=32;
		if(i==n-2)
			cout << v[i]<<", ";
		else
			cout << v[i]<<" ";
	}
	for(int i=0;i<v[n-1].length();i++)
		v[n-1][i]-=32;
	cout << v.back();

}

