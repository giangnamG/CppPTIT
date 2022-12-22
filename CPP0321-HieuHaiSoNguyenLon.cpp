#include<bits/stdc++.h>
using namespace std;

void process(){
	string x,y;
	cin >> x >> y;
	string max = "";
	string min = "";
	if(x.length()<y.length()){
		max = y;
		min = x;
	}else if(x.length()>y.length()){
		max = x;
		min = y;
	}else{
		max = x>y?x:y;
		min = x<y?x:y;
	}
	int len_min = min.length()-1;
	int len_max = max.length()-1;
	int res[10000];
	int mem = 0;
	int cnt=0;
	for(int i=len_min;i>=0;i--){
		int min_i = min[i]-'0'+mem;
		if(max[len_max]-'0'<min_i){
			res[len_max] = 10 + max[len_max]-'0' - min_i;
			mem = 1;
			cnt++;
		}else{
			res[len_max] = max[len_max]-'0' - min_i;
			mem = 0;
			cnt++;
		}
		len_max --;
	}
	for(int i=len_max;i>=0;i--){
		int sobitru = mem;
		if(max[i]-'0'<sobitru){
			res[i] = 10 + max[i]-'0' - sobitru;
			mem = 1;
			cnt++;
		}else{
			res[i] = max[i]-'0' - sobitru;
			mem = 0;
			cnt++;
		}
	}
	for(int i=0;i<cnt;i++)
		cout << res[i];
	cout <<"\n";
}
int main(){
	int t;
	cin >> t;
	while(t--)
		process();

}

