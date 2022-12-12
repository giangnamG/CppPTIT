#include<bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    
    int max_len=INT_MIN;
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++){
            sum1+=a[j];
            sum2+=b[j];
            if(sum1==sum2)
                max_len = max(max_len,j-i+1);
        }
    }
    cout << max_len<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--)
        process();
}