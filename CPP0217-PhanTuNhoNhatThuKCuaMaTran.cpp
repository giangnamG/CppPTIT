#include<bits/stdc++.h>
using namespace std;

void process(){
    int n,k;
    cin >> n >> k;
    int a[10000];
    int u = 0;
    for(int i=0; i<n;i++)
        for(int j=0;j<n;j++){
            cin >> a[u++];
        }
    sort(a,a+(n*n));
    cout << a[k-1] <<endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        process();
    }
    

}