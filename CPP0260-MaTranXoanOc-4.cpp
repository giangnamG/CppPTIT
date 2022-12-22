#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000];
int res[100][100];

void process(){

	int d_l = 0, d_r = n-1;
	int u_top = 1, u_under = n-1;
	int d = 1, u = 0;
	int row_crr = 0, col_crr = 0;
	int k = 0;
	while(k<n*n){
		if(d==1&&u==0){
			for(int i=d_l;i<=d_r;i++)
				res[row_crr][i] = a[k++];
			col_crr = d_r;
			d_r--;
			d = 0;
			u = -1;
		}else if(d==0&&u==-1){
			for(int i=u_top;i<=u_under;i++)
				res[i][col_crr] = a[k++];
			row_crr = u_under;
			u_under--;
			d = -1;
			u = 0;
		}else if(d==-1&&u==0){
			for(int i=d_r;i>=d_l;i--)
				res[row_crr][i] = a[k++];
			col_crr = d_l;
			d_l ++;
			d = 0;
			u = 1;
		}else if(d==0&&u==1){
			for(int i=u_under;i>=u_top;i--)
				res[i][col_crr] = a[k++];
			row_crr = u_top;
			u_top ++;
			d = 1;
			u = 0;
		}
	}
}
int main(){

	cin >> n;

	for(int i=0;i<n*n;i++)
		cin >> a[i];
	sort(a,a+n*n);

	process();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout << res[i][j]<<" ";
		cout <<"\n";
	}

}

