#include<bits/stdc++.h>
using namespace std;

void process(){
    char s[1111];
    cin.getline(s,1111);
    vector <string> v;
    vector <string> :: reverse_iterator it;
    char * p = strtok(s," ");
    while(p!=NULL){
        v.push_back(p);
        p = strtok(NULL," ");
    }
    for(it=v.rbegin();it!=v.rend();it++)
        cout << *it<<" ";
    cout <<"\n";
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
        process();
}