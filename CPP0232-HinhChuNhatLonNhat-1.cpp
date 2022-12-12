<<<<<<< HEAD
#include <bits/stdc++>
=======
#include<bits/stdc++.h>
>>>>>>> 52f3d6486fbfa71be705c51dbb0a19bb808490c5
using namespace std;

void process(){
    int n,m;
    cin >> n >> m;
    int a[100][100];
<<<<<<< HEAD
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
=======
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    vector <string> col;
    for(int i=0;i<m;i++){
        string s="";
        for(int j=0;j<n;j++){
            s+=a[j][i]+'0';
        }
        col.push_back(s);
    }
    int count_row_acp = 0;
    for(int i=0;i<col.size();i++)
        if(col[i].find("0")>1000)
            count_row_acp++;
    cout << count_row_acp*n<<"\n";
>>>>>>> 52f3d6486fbfa71be705c51dbb0a19bb808490c5
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}