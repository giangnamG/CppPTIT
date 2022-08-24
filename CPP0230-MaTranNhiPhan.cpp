#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	int row=0;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<3;j++){
			cin >> x;
			x ? count++ : count--;
		}
		count>0 ? row++ : row;
	}
	cout << row;

}

