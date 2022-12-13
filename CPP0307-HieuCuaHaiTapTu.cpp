#include <bits/stdc++.h>
using namespace std;
vector <string> getWordS1(char s[]){
    vector <string> res;
    char *p = strtok(s," ");
    while(p!=NULL){
        res.push_back(p);
        p = strtok(NULL," ");
    }
    return res;
}
map <string,int> getWordS2(char s[]){
    map <string,int> m;
    char *p = strtok(s," ");
    while(p!=NULL){
        m[p]=1;
        p = strtok(NULL," ");
    }
    return m;
}
bool cmp(string s1,string s2){
    return s1<s2;
}
void process(){
    char s1[1000];
    char s2[1000];
    cin.getline(s1,1000);
    cin.getline(s2,1000);
    vector <string> wordS1 = getWordS1(s1);
    map <string,int> wordS2 = getWordS2(s2);

    vector <string> :: iterator i;
    vector <string> :: iterator j;
    for(i=wordS1.begin();i!=wordS1.end();i++){
        for(j=i+1;j!=wordS1.end();j++){
            if(*i==*j){
                wordS1.erase(j);
                j--;
            }
        }
    }
    sort(wordS1.begin(),wordS1.end(),cmp);
    for(string s : wordS1){
        if(wordS2[s]!=1)
            cout << s<<" ";
    }
    cout <<endl;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
        process();
}