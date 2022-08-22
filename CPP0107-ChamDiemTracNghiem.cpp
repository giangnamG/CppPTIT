#include<bits/stdc++.h>
using namespace std;
double point(char code[],char a[]){
	int count=0;
	for(int i=0;i<15;i++)
		if(code[i]==a[i])
			count++;
	return (double)2.0*count/3;
}
int main(){
	int t;
	cin >> t;
	char a[16];
	char code_101[16]="ABBADCCABDCCABD";
	char code_102[16]="ACCABCDDBBCDDBB";
	int code;
	while(t--){
		cin >> code;
		for(int i=0;i<15;i++)
			cin >> a[i];
		if(code==101)
			cout <<fixed<<setprecision(2)<<point(code_101,a)<<endl;
		else
			cout <<fixed<<setprecision(2)<<point(code_102,a)<<endl;
	}

}

