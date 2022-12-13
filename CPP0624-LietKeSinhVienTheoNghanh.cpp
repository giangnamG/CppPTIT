#include<bits/stdc++.h>
using namespace std;

class SV{
    private:
        string msv,name,Class,email,branch;
    public:
        friend istream &operator >> (istream &,SV &);
        string getBranch();
        friend ostream &operator << (ostream &,SV );

};
istream &operator >> (istream &cin,SV &x){
    getline(cin,x.msv);
    getline(cin,x.name);
    getline(cin,x.Class);
    getline(cin,x.email);
    x.branch = (x.Class[0]=='E' && (x.msv.substr(3,4)=="DCCN" || x.msv.substr(3,4)=="DCAT")) ? "0" : x.msv.substr(3,4);
    return cin;
}
ostream &operator << (ostream &cout,SV x){
    cout <<x.msv<<" "<<x.name<<" "<<x.Class<<" "<<x.email<<"\n";
    return cout;
}
string SV::getBranch(){
    return this->branch;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    SV sv[1000];
    for(int i=0; i<n; i++)
        cin >> sv[i];
    int m;
    cin >> m;
    cin.ignore();
    vector <pair<string,string>> branch;
    for(int i=0; i<m; i++){
        string s;
        getline(cin,s);
        if(s=="Ke toan")
            branch.push_back({"DCKT","KE TOAN"});
        if(s=="Cong nghe thong tin")
            branch.push_back({"DCCN","CONG NGHE THONG TIN"});
        if(s=="An toan thong tin")
            branch.push_back({"DCAT","AN TOAN THONG TIN"});
        if(s=="Vien thong")
            branch.push_back({"DCVT","VIEN THONG"});
        if(s=="Dien tu")
            branch.push_back({"DCDT","DIEN TU"});
    }
    for(pair<string,string> x : branch){
        cout <<"DANH SACH SINH VIEN NGANH "<<x.second<<":\n";
        for(int i=0;i<n;i++)
            if(x.first==sv[i].getBranch())
                cout << sv[i];        
    }
}