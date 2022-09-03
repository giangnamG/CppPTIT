#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin >> n;
    map <int,int> m;
    for(int i=0;i<n;i++){
        cin >> x;
        m[x]=1;
    }
    if(m.size()<2)
        cout <<"-1";
    else{
        map <int,int> :: iterator it;
        it=m.begin();
        for(int i=0;i<2;i++){
            cout << it->first<<" ";
            it++;
        }
    }    
    cout << endl;   
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}