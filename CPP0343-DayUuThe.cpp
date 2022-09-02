#include<bits/stdc++.h>
using namespace std;
int to_int(char s[]){
	int n= strlen(s);
	int num=0,k=1;
	for(int i=n-1;i>=0;i--){
		num = num + (int)(s[i]-48)*k;
		k*=10;
	}
	return num;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		char s[700001];
		cin.getline(s,700001);
		map <int,int> m;
		map <int,int> :: iterator it;
		char *p = strtok(s," ");
		int n=0;
		while(p!=NULL){
			int num = to_int(p);
			num%2!=0 ? m[1]++ : m[0]++;
			n++;
			p=strtok(NULL," ");
		}
		if(n%2==0&&m[0]>m[1] || n%2!=0&&m[0]<m[1])
			cout <<"YES\n";
		else
			cout << "NO\n"; 
	}

}

