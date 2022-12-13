#include<bits/stdc++.h>
using namespace std;
#define ll 1000000007

void process(){
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    long long X = 1;
    long long sum = a[n-1] ;
    for(int i=n-2;i>=0;i--){
        X = ((X%ll)*(x%ll))%ll;
        sum = (sum + (X*a[i])%ll)%ll;
    }
    cout << sum<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();
    
}