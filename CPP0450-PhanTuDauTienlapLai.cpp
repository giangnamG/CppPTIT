#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    map <int,int> m;
    int x,value=0;
    for(int i=0;i<n;i++){
        cin >> x;
        if(m[x]==1&&!value){
            value=x;
            m[x]++;
        }else
            m[x]=1;
    }
    !value ? cout <<"-1\n" : cout << value<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}