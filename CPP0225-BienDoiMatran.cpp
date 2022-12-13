#include<bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    int a[100][100];
    vector <int> sum_row;
    vector <int> sum_col;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            cin >>a[i][j];
            sum += a[i][j];
        }
        sum_row.push_back(sum);
    }
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += a[j][i];
        }
        sum_col.push_back(sum);
    }
    sort(sum_col.begin(),sum_col.end());
    sort(sum_row.begin(),sum_row.end());
    int max = sum_col[n-1]>sum_row[n-1]?sum_col[n-1]:sum_row[n-1];
    int need1=0;
    for(int i=0;i<n;i++)
        need1+=max-sum_row[i];
    cout << need1 <<"\n";
    // int need2=0;
    // for(int i=0;i<n;i++)
    //     need2+=max-sum_row[i];
    // cout << need2 <<"\n";
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        process();
    }
    
}