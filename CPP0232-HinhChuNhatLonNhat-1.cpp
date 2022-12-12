#include <bits/stdc++>
using namespace std;

void process(){
    int n,m;
    cin >> n >> m;
    int a[100][100];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin >> a[i][j];
    }
    for(int j=1;j<=m;j++)
        a[0][j]=0;
    int areaMax = -1;
    int areaCurr = 0;
    bool col[100] = {0};
    int h[1000]={0};
    for(int i=1;i<n;i++){
        int length_row
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                h[j] = h[j-1]+1;
            }else
                h[j] = 0;
            

        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}