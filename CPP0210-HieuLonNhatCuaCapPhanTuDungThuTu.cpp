#include<bits/stdc++.h>
using namespace std;

void process(){
    int n,a[10000];
    cin >> n;
    int min=INT_MAX,max,subtract=-1;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
        else{
            if(a[i]>min){
                int tmp = a[i]-min;
                subtract = tmp>subtract ? tmp : subtract; 
            }
        }
    }
    subtract <=0 ? cout <<"-1\n" : cout << subtract<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        process();

}