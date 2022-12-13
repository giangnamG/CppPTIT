#include<bits/stdc++.h>
using namespace std;

void process(){
    int b[100][100]={0};
    int m,n;
    string res = "";
    cin >> n >> m;
    int a[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    int d=1,u=0; // d:phuong ngang | u:phuong thang dung
    int left_d=0,right_d=m-1;
    int top_u=1, under_u=n-1;
    int row=0,col=0;
    int count = 0;
    while(count<m*n){
        // cout <<"count: " << count<<"\n";
        if(u==0){
            if(d==1){
                // cout << "\nrow: "<<row<<" col: "<<col<<"\n";
                // cout << "left_d: "<<left_d<<" right_d: "<<right_d<<"\n";
                for(int i=left_d;i<=right_d;i++){
                    cout << a[row][i]<<" ";
                    count++;
                }
                col = right_d;
                right_d--;
                d = 0;
                u = -1;
            }else if(d==-1){
                // cout << "\nrow: "<<row<<" col: "<<col<<"\n";
                // cout <<" right_d: "<<right_d<< "left_d: "<<left_d<<"\n";
                for(int i=right_d;i>=left_d;i--){
                    cout << a[row][i]<<" ";
                    count++;
                }
                col = left_d;
                left_d ++;
                d = 0;
                u = 1;
            }
        }else if(d==0){
            if(u==1){
                // cout << "\nrow: "<<row<<" col: "<<col<<"\n";
                // cout <<" under_u: "<<under_u<< "top_u: "<<top_u<<"\n";
                for(int i=under_u;i>=top_u;i--){
                    cout << a[i][col]<<" ";
                    count++;
                }
                row = top_u;
                top_u  ++;
                d = 1;
                u = 0;
            }else if(u==-1){
                // cout << "\nrow: "<<row<<" col: "<<col<<"\n";
                // cout << "top_u: "<<top_u<<" under_u: "<<under_u<<"\n";
                for(int i=top_u;i<=under_u;i++){
                    cout << a[i][col]<<" ";
                    count++;
                }
                row = under_u;
                under_u--;
                d = -1;
                u = 0;
            }
        }
    }
    cout <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}