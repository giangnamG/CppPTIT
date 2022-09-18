#include<bits/stdc++.h>
using namespace std;

bool check(long long n){
    int tmp=0,d;
    int rec = n%10;
    n/=10;
    while(n>0){
        if(rec>n%10)
            d=1;
        else if(rec<n%10)
            d=-1;
        else if(rec==n%10)
            return false;
        if(!tmp){
            tmp=d;
        }
        rec=n%10;
        n/=10;
        if(tmp!=d)
            return false;
    }
    return true;
}
bool isPrime(long long n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return false;
    return n>1;
}
void process(){
    int n;
    cin >> n;
    long long l = pow(10,n-1);
    long long r = pow(10,n);
    if(l==1)
        l=2;
    else if(l%2==0)
        l+=1;
    int count = 0;
    for(long long i=l;i<=r;i+=2)
        if(check(i))
            if(isPrime(i))
                count++;
    cout << count <<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();

}