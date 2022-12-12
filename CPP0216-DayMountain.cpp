#include<bits/stdc++.h>
using namespace std;

void process(){
    int n,x,y;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >>a[i];
    cin >> x >> y;
    if(x>y){
        int tmp = x;
        x=y;
        y=tmp;
    }
    string b="";
    int u = 0;
    for(int i=x;i<y;i++)
        if(a[i+1]>a[i])
            b+='1';
        else
            b+='0';
    // cout << b<<"\n";
    if(b.find("01")!=-1){
        cout <<"No\n";
    }else
        cout << "Yes\n";
}

int main(){
    int t;
    cin >>t;
    while(t--)
        process();

}