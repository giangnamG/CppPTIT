#include<bits/stdc++.h>
using namespace std;

int a[100],n;
void in(){
    for(int i=1;i<n+1;i++)
        cout << a[i];
    cout <<" ";
}
void Try(int i){
    for(int j=0;j<2;j++){
        a[i]=j;
        if(i==n)
            in();
        else    
            Try(i+1);
    }
}
void process(){
    cin >> n;
    a[n+1]={0};
    Try(1);
    cout <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        process();
    }
}