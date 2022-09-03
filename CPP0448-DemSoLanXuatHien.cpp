#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    map <int,int> m;
    int tmp;
    for(int i=0;i<n;i++){
        cin >> tmp;
        m[tmp]++;
    }
    !m[x] ?  cout <<"-1\n" : cout << m[x]<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
}