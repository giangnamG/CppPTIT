#include <bits/stdc++.h> 
using namespace std; 
vector <long long> 
check(1001); 
const long long r = 1e9 + 7; 
void fibo() { check[0] = 0;
check[1] = 1; 
for(int i=2; i<=1000; i++) { 
    check[i] = (check[i-1]%r) + (check[i-2]%r); 
    
} 
    
}
int main() { 
    int t; cin>>t; 
    fibo(); 
    while(t--) { 
        int n;
        cin>>n;
        cout<<check[n]%r<<endl;
        } 
    
}
    