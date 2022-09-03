#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int min=INT_MAX;
    int x,y;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++){
            int sum = abs(a[i]+a[j]);
            if(sum<min){
                min=sum;
                x=a[i];
                y=a[j];
            }
        }
    cout << x+y<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}