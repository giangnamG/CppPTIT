#include<bits/stdc++.h>
using namespace std;

int solve(){
    long long n;
    cin >> n;
   long long sum=n*(n+1)/2;
   long long s=0;
   int x;
   for(int i=0;i<n-1;i++){
        cin >> x;
        s+=x;
   }
   return sum-s;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cout << solve() <<"\n";
    }
}
