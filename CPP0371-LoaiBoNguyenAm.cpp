#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(){
	char s[111];
	cin.getline(s,111);
	string NN="aeiouy";
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A'&&s[i]<='Z')
			s[i]+=32;
		if(NN.find(s[i],0)>10)
			cout << "."<<s[i];
		continue;
		
	}

}

