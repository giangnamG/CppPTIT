#include<bits/stdc++.h>
using namespace std;

int binary(int a[],int l,int r,int x){
    int mid = (l+r)/2;
    if(l>r)
        return -1;
    else if(a[mid]==x)
        return 1;
    else if(a[mid]>x)
        return binary(a,l,mid-1,x);
    else if(a[mid]<x)
        return binary(a,mid+1,r,x);
}
void solve(){
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    cout << binary(a,0,n-1,x)<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}