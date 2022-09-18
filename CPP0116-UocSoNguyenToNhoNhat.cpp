#include<bits/stdc++.h>
using namespace std;
void process(){
    int n;
    cin >> n;
    bool b[11111]={0};
    for(int i=2;i<=n;i++)
        if(!b[i])
            for(int j=i*i;j<=n;j+=i)
                b[j]=1;
    for(int i=1;i<=n;i++){
        if(!b[i])
            cout << i<<" ";
        else{
            if(i%2==0)
                cout << "2 ";
            else
                for(int j=3;j<=i;j+=2)
                    if(!b[j])
                        if(i%j==0){
                            cout << j<<" ";
                            break;
                        }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        process();
        cout <<endl;
    }
}