#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
void in(){
    for(int i=1;i<=k;i++)
        cout << a[i];
    cout <<" ";
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k)
            in();
        else 
            Try(i+1);
    }
}
void process(){
    cin >> n >>k;
    a[0]=0;
    Try(1);
    cout <<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();

}