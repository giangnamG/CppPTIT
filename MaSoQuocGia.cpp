#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		int index = s.find("084");
		string s1 = s.erase(index,3);
		cout << s1<<endl;	
	}
	
}

