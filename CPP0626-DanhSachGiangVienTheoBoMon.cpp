#include<bits/stdc++.h>
using namespace std;

int id=0;
class GV{
    private:
        string name,ma,bo_mon;
    public:
        friend istream & operator >> (istream &,GV &);
        friend ostream & operator << (ostream &,GV);
        string getBoMon();

};
string bo_mon(string s){
    char tmp[100];
    strcpy(tmp,s.c_str());
    char *p = strtok(tmp," ");
    string res="";
    while(p!=NULL){
        res+=toupper(p[0]);
        p = strtok(NULL," ");
    }
    return res;
}
istream &operator >> (istream &cin,GV &x){
    getline(cin,x.name);
    getline(cin,x.bo_mon);
    id++;
    string ma = "GV";
    if(id<10){
        ma+="0";
        ma+=id+'0';
    }else{
        string s = "";
        int n = id;
        while(n>0){
            s+=(n%10)+'0';
            n/=10;
        }
        reverse(s.begin(),s.end());
        ma+=s;
    }
    x.ma = ma;
    x.bo_mon = bo_mon(x.bo_mon);
    return cin;
}
ostream &operator << (ostream &cout,GV x){
    cout << x.ma<<" "<<x.name<<" "<<x.bo_mon<<"\n";
    return cout;
}
string GV::getBoMon(){
    return this->bo_mon;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    GV gv[100];
    for(int i=0;i<n;i++)
        cin >> gv[i];
    int q;
    cin >> q;
    cin.ignore();
    vector <string> boMon;
    for(int i=0;i<q;i++){
        string s;
        getline(cin,s);
        boMon.push_back(bo_mon(s));
    }
    for(string x : boMon){
        cout <<"DANH SACH GIANG VIEN BO MON "<< x<<":\n";
        for(int j=0;j<n;j++)
            if(gv[j].getBoMon()==x)
                cout << gv[j];
    }

}