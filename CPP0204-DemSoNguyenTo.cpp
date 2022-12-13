#include<bits/stdc++.h>
using namespace std;

void process(){
    int l,r;
    cin >> l >> r;
    bool a[r+1]={0};
    a[1]=1;
    for(int i=2;i<=r;i++)
        if(!a[i])
            for(int j=i*i;j<=r;j+=i)
                a[j]=1;
    int cnt = 0;
    for(int i=l;i<=r;i++)
        if(!a[i])
            cnt++;
    cout << cnt<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        process();
    }
}