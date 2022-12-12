#include<bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int l=0,r=n-1;
    int count = 0;
    while(l<r){
        if(a[l]==a[r]){
            l++;
            r--;
        }else if(a[l]>a[r]){
            r--;
            a[r]=a[r]+a[r+1];
            count++;
        }else if(a[l]<a[r]){
            a[l]=a[l]+a[l+1];
            count++;
        }
    }
    cout <<count<< "\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}