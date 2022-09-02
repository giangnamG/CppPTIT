#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	char s[2000];
	while(t--){
		cin.getline(s,1500);
		int n=strlen(s);
		long long sum_odd=0;
		long long sum_even=0;
		for(int i=0;i<n;i++){
			if(i%2==0)
				sum_even+=(int)(s[i]-48);
			else
				sum_odd +=(int)(s[i]-48);
		}
		long long sub = abs(sum_even-sum_odd);
//		cout << sum_even <<" "<< sum_odd <<" "<< sub<<"\n";
		if(sub%11==0)
			cout << "1\n";
		else
			cout << "0\n";
	}

}

