#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return n>1;
}
void process(){
    int x;
    cin >> x;
    int t=0;
    for(int i=1;i<=x;i++)
        if(__gcd(i,x)==1)
            t++;
    isPrime(t) ? cout <<"1\n" : cout <<"0\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}