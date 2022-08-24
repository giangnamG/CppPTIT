#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a[100][100];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin >> a[i][j];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i>0&&i<n-1&&j>0&&j<n-1)
					cout <<"  ";
				else
					cout << a[i][j]<<" ";
			}
			cout << endl;
		}
	}

}

