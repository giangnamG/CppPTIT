#include<bits/stdc++.h>
using namespace std;

void process(){
    long long n;
    cin >> n;
    long long f0 = 0,f1=1;
    long long f2 = f0+f1;
    while(f2<n){
        f0=f1;
        f1=f2;
        f2=f0+f1;
    }
    f2==n || n==0 ? cout <<"YES\n" : cout <<"NO\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();

}