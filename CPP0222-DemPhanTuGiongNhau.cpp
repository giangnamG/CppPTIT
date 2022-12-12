#include<bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    vector <int> v;
    for(int i=0;i<n;i++)
        v.push_back(a[0][i]);
    for(int i=1;i<n;i++){
        for(int j=0;j<v.size();j++){
            int ok=0;
            for(int k=0;k<n;k++){
                if(v[j]==a[i][k]){
                    ok = 1;
                    break;
                }
            }
            if(!ok){
                v.erase(v.begin()+j);
                j--;
            }
        }
    }
    map <int,int> m;
    for(int i=0;i<v.size();i++)
        m[v[i]]=1;
    cout << m.size()<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();

}