#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
=======
long long to_5(char s[]){
    for(int i=0;i<strlen(s);i++)
        if(s[i]=='6')
            s[i]='5';
    long long n=0;
    for(int i=0;i<strlen(s);i++)
        n = n*10+(int)s[i]-'0';
    return n;
}
long long to_6(char s[]){
    for(int i=0;i<strlen(s);i++)
        if(s[i]=='5')
            s[i]='6';
    long long n=0;
    for(int i=0;i<strlen(s);i++)
        n = n*10+(int)s[i]-'0';
    return n;
}
>>>>>>> 52f3d6486fbfa71be705c51dbb0a19bb808490c5
void process(){
    char a[100];
    char b[100];
    cin >> a;
    cin >> b;
<<<<<<< HEAD
=======
    long long x = to_5(a);
    long long y = to_5(b);
    cout << x+y <<" ";
    x = to_6(a);
    y = to_6(b);
    cout << x+y<<"\n";
>>>>>>> 52f3d6486fbfa71be705c51dbb0a19bb808490c5
    
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
        process();
}