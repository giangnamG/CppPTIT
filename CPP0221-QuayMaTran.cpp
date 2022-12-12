#include<bits/stdc++.h>
using namespace std;

void process(){
    int n,m;
    cin >> n >> m;
    int a[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    int d=1,u=0; //d: phuong ngang | u: phuong thang dung
    int d_left=0,d_right=m-1;
    int u_under=n-1,u_top=1;
    int row=0,col=-1;
    int run = n/2;
    int check=0;
    while(run--){
        int cnt=4;
        int mem=a[row][col+1];
        // cout <<"\nrow: "<<row<<"\ncol: "<<col<<"\n";
        // cout <<"mem: "<<mem<<"\n";
        // cout <<"check: "<<check<<"\n";
        while(cnt--){
            if(u==0){
                if(d==1){
                    for(int i=d_left;i<=d_right;i++)
                        swap(mem,a[row][i]);
                    col=d_right;
                    d_right--;
                    d=0;
                    u=-1;
                }else if(d==-1){
                    for(int i=d_right;i>=d_left;i--)
                        swap(mem,a[row][i]);
                    col=d_left;
                    d_left++;
                    d=0;
                    u=1;  
                }
            }else if(d==0){
                if(u==-1){
                    for(int i=u_top;i<=u_under;i++){
                        swap(mem,a[i][col]);
                    }
                    row=u_under;
                    u_under--;
                    u=0;
                    d=-1;
                }else if(u==1){
                    for(int i=u_under;i>=u_top;i--){
                        swap(mem,a[i][col]);
                    }
                    check = 1;
                    row=u_top;
                    u_top++;
                    u=0;
                    d=1;
                }
            }
        }
        swap(mem,a[row-1][col]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout << a[i][j]<<" ";
        // cout <<"\n";
    }
    cout <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();

}

