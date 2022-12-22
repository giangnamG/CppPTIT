#include<bits/stdc++.h> 
using namespace std; 
int check(string s){
    if(s[s.size() - 1] == '?' || s[s.size() - 1] == '.' || s[s.size()-1] == '!') 
        return 1;
    return 0; 
    
} 
int main(){ 
    string s,
    line = ""; 
    vector<string> v;
    while(cin>>s){
        if(line == ""){
            line = line + s;
        }else{ 
            line = line + " " + s;
            }
        if(check(line) == 1){
            line.erase(line.size()-1);
            line[0] = toupper(line[0]); 
            for(int i = 1; i < line.size(); i++){
                line[i] = tolower(line[i]); 
            } 
            v.push_back(line);
            line = ""; 
        } 
    } 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    } 
}
