#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int max = INT_MIN;
    for(int i=0;i<=n/2;i++){
        for(int j=n-1;j>=n/2;j--){
            if(a[i]<=a[j]){
                max = max > j-i ? max : j-i;
                break;
            }
        }
    }
    cout << max<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}