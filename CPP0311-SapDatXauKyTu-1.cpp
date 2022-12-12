#include<bits/stdc++.h>
using namespace std;

void process(){
    string s;
    getline(cin,s);
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
    while(t--)
        process();
}