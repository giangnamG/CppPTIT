#include<bits/stdc++.h>
using namespace std;

int main(){
	char s1[10000];
	string s2;
	cin.getline(s1,10000);
	getline(cin,s2);
	char *p = strtok(s1," ");
	vector <string> v;
	vector <string> :: iterator it;
	while(p!=NULL){
		v.push_back(p);
		p=strtok(NULL," ");
	}
	for(it=v.begin();it!=v.end();it++)
		if(s2.find(*it)>=INT_MAX){
			cout <<*it<<" ";
	}
}

