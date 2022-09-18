#include<bits/stdc++.h>
using namespace std;
void process(){
    int n,m,a,b;
    cin >> n >> m >> a>> b;
    if(n>m){
        int tmp = n;
        n = m;
        m = tmp;
    }
    int cnt=0;
    for(int i=n;i<=m;i++){
        if(i%a==0)
            cnt++;
        else if(i%b==0)
            cnt++;
    }
    cout << cnt<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}