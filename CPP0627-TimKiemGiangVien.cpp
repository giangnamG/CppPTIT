#include <bits/stdc++.h>
using namespace std;

int id=1;
struct GV{
    string hoTen,boMon,id;
};
string getBoMon(string s){
    char tmp[1000];
    strcpy(tmp,s.c_str());
    char *p = strtok(tmp," ");
    string res = "";
    while(p!=NULL){
        res += toupper(p[0]);
        p = strtok(NULL," ");
    }
    return res;
}
string tolower(string query){
    for(int i=0;i<query.length();i++)
        query[i] = tolower(query[i]);
    return query;
}
int main(){
    int n;
    cin >> n; cin.ignore();
    GV gv[100];
    for(int i=0;i<n;i++){
        gv[i].id="GV";
        if(i+1<10)
            gv[i].id+="0"+to_string(i+1);
        else
            gv[i].id+=to_string(i+1);
        getline(cin,gv[i].hoTen);
        getline(cin,gv[i].boMon);
    }
    int queryNumber; cin >> queryNumber; cin.ignore();
    while(queryNumber--){
        string query;
        getline(cin,query);
        string tmp=query;
        query = tolower(query);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<tmp<<":\n";
        for(int i=0;i<n;i++){
            if(tolower(gv[i].hoTen).find(query)<gv[i].hoTen.length()){
                cout << gv[i].id<<" "<<gv[i].hoTen<<" "<<getBoMon(gv[i].boMon)<<"\n";
            }
        }
    }
}