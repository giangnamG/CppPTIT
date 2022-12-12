#include<bits/stdc++.h>
using namespace std;

void process(){
    long long a,x,y;
    cin >> a >> x >> y;
    long long u = __gcd(x,y);
    for(long long i=0;i<u;i++)
        cout<< a;
    cout <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}