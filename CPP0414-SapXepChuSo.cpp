#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> t;
		
	while(t--){
		cin >> n;
		cin.ignore();
		string s;
		getline(cin,s);
		int n = s.length();
		map <char,int> m;
		map <char,int> :: iterator it;
		for(int i=0;i<n;i++)
			if(!m[s[i]])
				m[s[i]]++;
		for(it=m.begin();it!=m.end();it++){
			if(it->first==' ')
				continue; 
			cout << it->first<<" ";
		}
		cout << endl;
	}
}

