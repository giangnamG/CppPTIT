#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int n = s.length();
		int a[10000]={0};
		for(int i=0;i<n;i++)
			a[s[i]]++;
		for(int i=0;i<n;i++)
			if(a[s[i]]==1)
				cout << s[i];
		cout << endl;
	}

}

