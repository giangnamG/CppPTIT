#include<bits/stdc++.h>
using namespace std;

int a[100],n;
bool b[100]={false};
void in(){
    for(int i=0;i<n;i++)
        cout << a[i]<<" ";
    cout <<"\n";
}
// 1 2 3 4 5
// 5 4 3 2 1
// 5 4 3 1 2 => 1
// 5 4 1 3 2 

void process(){
    cin >> n;
    for(int i=0;i<n;i++)
        cin >>a[i];
    int k = n-2;
    while(k>=0&&a[k]<a[k+1])
        k--;
    if(k>0){
        swap(a[k],a[k+1]);
        sort(a+k,a+n);
    }
    in();
}
int main(){
    int t;
    cin >> t;
    while(t--){
        process();
    }

}


