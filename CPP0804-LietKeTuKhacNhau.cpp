#include<bits/stdc++.h>
using namespace std;
char * stringtolower(char s[]){
	int n = strlen(s);
	for(int i=0;i<n;i++)
		s[i] = tolower(s[i]);
	return s;
}
int main(){
	ifstream ifs("VANBAN.in");
	map <string,int> m;
	string line;
	while(getline(ifs,line)){
		char tmp[1000];
		strcpy(tmp,line.c_str());
		char *p = strtok(tmp," ");
		while(p!=NULL){
			p = stringtolower(p);
			m[p]=1;
			p = strtok(NULL," ");
		}
	}
	for(map <string,int> :: iterator i = m.begin();i!=m.end();i++)
		cout << i->first<<"\n";

}

