#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[105];
	cin.getline(s,104);
	for(int i=0;i<strlen(s);i++)
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=32;
	char * p = strtok(s," ");
	vector <string> v;
	while(p!=NULL){
		v.push_back(p);
		p=strtok(NULL," ");
	}
	cout << v.back(); v.pop_back();
	for(int i=0;i<v.size();i++)
		cout << v[i].substr(0,1);
	cout << "@ptit.edu.vn";
}

