#include<bits/stdc++.h>
using namespace std;

void process(){
	string a,b;
	cin >> a >> b;
	string max,min;
	if(a.length()>b.length()){
		max = a;
		min = b;
	}else if(a.length()<b.length()){
		max = b;
		min = a;
	}else{
		max = a > b ? a:b;
		min = a > b ? b:a; 
	}
	int mem = 0;
	string res="";
	int index_max = max.length()-1;
	for(int i = min.length()-1;i>=0;i--){
		int num = max[index_max]-'0' + min[i]-'0' + mem;
		if(num>9){
			mem = 1;
			res += num%10 + '0';
		}else{
			mem = 0;
			res += num%10 + '0';
		}
		index_max--;
	}
	index_max = max.length()-1;
	for(int i = max.length()-min.length()-1;i>=0;i--){
		int num = max[i]-'0' + mem;
		if(num>9){
			mem = 1;
			res += num%10 + '0';
		}else{
			mem = 0;
			res += num%10 + '0';
		}
	}
	if(mem>0)
		res += mem+'0';
	reverse(res.begin(),res.end());
	cout << res<<"\n";
}
int main(){
	int t;
	cin >> t;
	while(t--)
		process();

}

