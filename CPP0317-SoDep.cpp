#include<bits/stdc++.h>
using namespace std;
void rev(char s[]){
	int k=0;
	char tmp[600];
	int n = strlen(s);
	for(int i=n-1;i>=0;i--)
		tmp[k++]=s[i];
	tmp[k]='\0';
	strcpy(s,tmp);
}
int main(){
	int n;
	cin >>n;
	cin.ignore();
	char s[600];
	int check;
	for(int i=0;i<n;i++){
		check=0;
		cin.getline(s,600);
		char tmp[600];
		strcpy(tmp,s);
		rev(tmp);
		if(!strcmp(tmp,s)){
			int k=strlen(s);
			for(int j=0;j<k;j++){
				if((int)s[j]%2!=0){
					check=1;
					break;
				}
			}
		}else
			check=1;
		!check ? cout << "YES\n" : cout <<"NO\n";
	}


}

