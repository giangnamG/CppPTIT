#include<bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    cout << "1 ";
    for(int i=2;i<=n;i++){
        if(i%2==0){
            cout <<"2 ";
            continue;
        }
        for(int j=3;j<=n;j+=2){
            if(i%j==0){
                cout << j<<" ";
                break;
            }
        }
    }
    cout <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}