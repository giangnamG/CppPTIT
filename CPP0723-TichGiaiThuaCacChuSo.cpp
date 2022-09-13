#include<bits/stdc++.h>
using namespace std;
void process(){
    int n;
    long long a;
    cin >> n >> a;
    int x[100];
    int u = 0;
    while(a>0){
        int res = a%10;
        if(res==2||res==3||res==5||res==7)  
            x[u++]=res;
        else if(res==4){
            x[u++]=3;
            x[u++]=2;
            x[u++]=2;
        }else if(res==6){
            x[u++]=5;
            x[u++]=3;
        }else if(res==8){
            x[u++]=7;
            x[u++]=2;
            x[u++]=2;
            x[u++]=2;
        }else if(res==9){
            x[u++]=7;
            x[u++]=3;
            x[u++]=3;
            x[u++]=2;
        }
        a/=10;
    }
    sort(x,x+u,greater<int>());
    for(int i=0;i<u;i++)
        cout <<x[i];
    cout<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}
/*
2! -> 2!
3! -> 3!
4! -> 3! * 2! * 2!
5! -> 5!
6! -> 5! * 3!
7! -> 7!
8! -> 7! * 2! * 2! * 2!
9! -> 7! * 3! * 3! * 2!
sort()
*/
