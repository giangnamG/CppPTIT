#include<bits/stdc++.h>
using namespace std;

void process(){
    int n,m;
    cin >> n >> m;
    int a[100][100];
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
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}