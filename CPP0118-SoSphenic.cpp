#include<bits/stdc++.h>
using namespace std;
int process(){
    int n;
    cin >> n;
    int count = 0;
    int rec=0;
    while(n%2==0){
        rec ++;
        if(rec>1)
            return 0;
        n/=2;
        count++;
    }
    
    for(int i=3;i<=sqrt(n);i+=2){
        rec = 0;
        while (n%i==0)
        {
            rec++;
            if(rec>1)
                return 0;
            n/=i;
            count++;
        }
    }
    if(n>1){
        count++;
    }
    if(count!=3)
        return 0;
    return 1;
}
int  main(){
    int t;
    cin >> t;
    while(t--)
        process() ? cout <<"1\n":cout<<"0\n";
}