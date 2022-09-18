#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return n > 1;
}
void process(){
    long long n;
    cin >> n;
    int m = sqrt(n);
    int cnt=0;
    if(m>2)
        cnt++;
    for(int i=3;i<=m;i+=2)
        if(isPrime(i))
            cnt++;
    cout << cnt<< endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}