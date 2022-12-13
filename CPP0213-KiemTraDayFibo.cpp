#include<bits/stdc++.h>
using namespace std;

long long fibo(long long n){
        long long sum=0, n1=0, n2=1;
        while(sum < n){
            sum = n1 +n2;
            n1=n2;
            n2=sum;
        }
        if(sum == n) return 1;
        else return 0;
}

int main(){
    int test;
    cin >> test;
    while(test--){
        long long n;
        cin >> n;
        long long A[n];
        for(long long i = 0; i < n;i++) cin >> A[i];
        for(long long i = 0; i < n;i++){
            if(fibo(A[i])) cout << A[i] << " ";
        }
        cout << endl;
    }
}