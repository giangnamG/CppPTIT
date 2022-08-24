#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,k;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		cin >> k; cin.ignore();
		int n = s.length();
		if(n<26)
			cout <<"0\n";
		else{
			int a[1000]={0};
			for(int i=0;i<n;i++)
				a[s[i]]++;
			int dem = 0;
			for(int i='a';i<='z';i++)
				if(a[i]){
//					cout << (char)i;
					dem++;
				}
			if(k+dem>=26)
				cout <<"1\n";
			else
				cout <<"0\n";
//			cout << dem<<"\n";
		}
	}
}

