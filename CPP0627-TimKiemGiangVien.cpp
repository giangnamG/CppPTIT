<<<<<<< HEAD
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
=======
#include<bits/stdc++.h>
using namespace std;

int id = 0;
string boMon(string);
class GV{
    private:
        string name,ma,bo_mon;
    public:
        friend istream &operator >> (istream &cin,GV &x){
            getline(cin,x.name);
            getline(cin,x.bo_mon);
            x.bo_mon = boMon(x.bo_mon);
            id++;
            string ma="GV";
            if(id<10){
                ma+="0";
                ma+=id+'0';
            }else{
                ma += to_string(id);
            }
            x.ma = ma;
            return cin;
        }
        friend ostream &operator << (ostream &cout,GV x){
            cout << x.ma<<" "<<x.name<<" "<<x.bo_mon<<"\n";
            return cout;
        }
        bool findGV(string);
};
string stringToLower(string s){
    string tmp="";
    for(char c:s)
        tmp+=tolower(c);
    return tmp;
}
bool GV::findGV(string keyW){
    keyW = stringToLower(keyW);
    string name = stringToLower(this->name);
    if(name.find(keyW)<name.length())
        return true;
    return false;
}
string boMon(string s){
    char tmp[100];
    strcpy(tmp,s.c_str());
    string res="";
    char *p = strtok(tmp," ");
    while(p!=NULL){
        res+=toupper(p[0]);
>>>>>>> 52f3d6486fbfa71be705c51dbb0a19bb808490c5
        p = strtok(NULL," ");
    }
    return res;
}
<<<<<<< HEAD
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
=======
int main(){
    int n;
    cin >> n;
    cin.ignore();
    GV gv[100];
    for(int i=0;i<n;i++)
        cin >> gv[i];
    int m;
    cin >> m;
    cin.ignore();
    vector<string> key;
    for(int i=0;i<m;i++){
        string s;
        getline(cin,s);
        key.push_back(s);
    }
    for(string word : key){
        cout <<"DANH SACH GIANG VIEN THEO TU KHOA "<<word<<":\n";
        for(int i=0;i<n;i++){
            if(gv[i].findGV(word))
                cout << gv[i];
>>>>>>> 52f3d6486fbfa71be705c51dbb0a19bb808490c5
        }
    }
}