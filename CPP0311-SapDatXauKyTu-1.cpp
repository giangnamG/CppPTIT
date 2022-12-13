#include<bits/stdc++.h>
using namespace std;

void process(){
    string s;
    getline(cin,s);
    int a[255];
    memset(a,255,0);
    string res = "";
    for(int i=0;i<s.length();i++)
        if(!a[s[i]]){
            a[s[i]]++;
            res.push_back(s[i]);
        }
    int check = 0;
    int accept = s.length()-1;
    
    for(int i=0;i<res.length();i++)
        if(a[s[i]]>accept)
            check = 1;
    if(check)
        cout << 0<<"\n";
    else 
        cout << 1<<"\n";
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
        process();
}