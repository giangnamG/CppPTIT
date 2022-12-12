#include<bits/stdc++.h>
using namespace std;


class SV{
    private:
        string msv,name,lop,email;
    public:
        friend istream &operator >> (istream &cin,SV &x){
            getline(cin,x.msv);
            getline(cin,x.name);
            getline(cin,x.lop);
            getline(cin,x.email);
            return cin;
        }
        string getLop();
        friend ostream &operator << (ostream &cout,SV x){
            cout << x.msv<<" "<<x.name<<" "<<x.lop<<" "<<x.email<<"\n";
            return cout;
        }
};
string SV::getLop(){
    return this->lop;
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
    vector <string> lop;
    for(int i=0; i<m; i++){
        string tmp;
        cin >>tmp;
        lop.push_back(tmp);
    }
    for(int i=0; i<m; i++){
        cout <<"DANH SACH SINH VIEN LOP "<<lop[i]<<":\n";
        for(int j=0; j<n; j++)
            if(lop[i]==sv[j].getLop())
                cout << sv[j];
    }
}