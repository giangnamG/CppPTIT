#include<bits/stdc++.h>
using namespace std;
int ckn(int k,int n){
	if(k==0 || k==n)
		return 1;
	if(k==1)
		return n;
	return ckn(k-1,n-1)+ckn(k,n-1);
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char s[1200];
		cin.getline(s,1100);
		int n = strlen(s);
		map <char,int> m;
		map <char,int> :: iterator it;
		for(int i=0;i<n;i++)
			m[s[i]]++;
		int dem = n;
		for(it=m.begin();it!=m.end();it++){
			int tmp = it->second;
			if(tmp > 1)
				dem += ckn(2,tmp);
		}
		cout << dem<<"\n";
	}

}

