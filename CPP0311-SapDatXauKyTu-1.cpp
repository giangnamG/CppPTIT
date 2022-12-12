#include<bits/stdc++.h>
using namespace std;

void process(){
    string s;
    getline(cin,s);
<<<<<<< HEAD
    map <char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    char chr_have_cnt_max;
    int cnt_max = -1;
    for(map <char,int> :: iterator i=m.begin();i!=m.end();i++){
        if(i->second > cnt_max){
            cnt_max = i->second;
            chr_have_cnt_max = i->first;
        }
    }
    m[chr_have_cnt_max]-1 <= s.length()-m[chr_have_cnt_max] ? cout << "1\n" : cout <<"0\n";
}
int main(){
    int t;
    cin >> t; cin.ignore();
=======
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
>>>>>>> 52f3d6486fbfa71be705c51dbb0a19bb808490c5
    while(t--)
        process();
}