#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int dem = 0,check=0; 
		for(int i=0;i<s.length();i++){
			if(s[i]==' '||s[i]=='\t'){
				check=0;
				continue;
			}
			if(!check){
				check=1;
				dem++;
			}
		}
		cout << dem<<"\n";
	}

}

