#include<bits/stdc++.h>
using namespace std;

string min(int m, int s){
	if(s > m*9 || s==0 && m>1)
		return "-1";
	s-=1;
	vector <int> v(m);
	for(int i=m-1;i>0;i--){
		if(s>=9){
			s-=9;
			v[i]=9;
		}else{
			v[i]=s;
			s=0;
		}
	}
	v[0]=s+1;
	string result;
	for(int i=0;i<m;i++)
		result.push_back(v[i]+'0');
	return result;
}
string max(int m, int s){
	if(s>m*9 || m>1&&s==0)
		return "-1";
	vector <int> v(m);
	for(int i=0;i<m;i++){
		if(s>=9){
			v[i]=9;
			s-=9;
		}else{
			v[i]=s;
			s=0;
		}
	}
	string result;
	for(int i=0;i<m;i++)
		result.push_back(v[i]+'0');
	return result;
}
int main(){
	int m,s;
	cin >> m >> s;
	cout << min(m,s)<<" " << max(m,s);
} 
