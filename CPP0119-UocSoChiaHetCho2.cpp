#include<bits/stdc++.h>
using namespace std;

int process(){
    int n;
    cin >> n;
    int a[100000];
    int u=0,count=0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0){
            if(i%2==0)
                count++;
            if((n/i)%2==0&&i*i!=n)
                count++;
        }    
    if(n%2==0)
        count++;
    return count;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        cout<< process()<<"\n";
}