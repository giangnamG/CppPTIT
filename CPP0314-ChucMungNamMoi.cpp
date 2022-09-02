#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cin.ignore();
	string s;
	vector <string> v;
	vector <string> :: iterator it1,it2;
	for(int i=0;i<n;i++){
		getline(cin,s);
		v.push_back(s);
	}
	for(it1=v.begin();it1!=v.end();it1++){
		for(it2=it1+1;it2!=v.end();it2++)
			if(*it1==*it2){
				v.erase(it2);
				it2--;
			}
	}

	cout  << v.size();	

}

