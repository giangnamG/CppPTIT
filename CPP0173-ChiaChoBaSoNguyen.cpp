#include<bits/stdc++.h>

using namespace std;

long long bcnn(long long a, long long b){
    long long gcd = __gcd(a,b);
    return a*b/gcd;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long x, y, z, n;
        cin >> x >> y >> z >> n;
        long long m = bcnn(x,bcnn(y,z));
        long long h = pow(10,n-1);
        long long kq = ((h+m-1)/m)*m;
        if(kq < pow(10,n)) cout << kq << endl;
        else cout << -1 << endl;
    }
}