#include<bits/stdc++.h>
using namespace std;
int id=0;
class GV{
    private:
        string name,ma,bo_mon;
    public:
        friend istream &operator >> (istream &,GV&);
        string getName();
        string getMa();
        friend ostream &operator << (ostream &,GV);

};
istream &operator >> (istream &cin,GV &x){
    getline(cin,x.name);
    getline(cin,x.bo_mon);
    char tmp[100];
    strcpy(tmp,x.bo_mon.c_str());
    char *p = strtok(tmp," ");
    string s="";
    while(p!=NULL){
        s+=towupper(p[0]);
        p = strtok(NULL," ");
    }   
    x.bo_mon=s;
    x.ma = "GV";
    id++;
    if(id<10){
        x.ma+="0";
        x.ma +=(id+'0');
    }else{
        int n = id;
        string s = "";
        while(n>0){
            s+=(n%10)+'0';
            n/=10;
        }
        reverse(s.begin(),s.end());
        x.ma += s;
    }

    return cin;
}
ostream &operator << (ostream &cout,GV x){
    cout << x.ma<<" "<<x.name<<" "<<x.bo_mon<<"\n";
    return cout;
}
string GV::getName(){
    char s[100];
    strcpy(s,this->name.c_str());
    char *p = strtok(s," ");
    string res="";
    while(p!=NULL){
        res.assign(p,strlen(p));
        p=strtok(NULL," ");
    }
    return res;
}
string GV::getMa(){
    return this->ma;
}
bool cmp(GV a,GV b){
    if(a.getName()==b.getName())
        return a.getMa() < b.getMa();
    return a.getName() < b.getName();
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    GV gv[1000];
    for(int i=0;i<n;i++)
        cin >> gv[i];
    sort(gv,gv+n,cmp);
    for(int i=0;i<n;i++)
        cout << gv[i];
}