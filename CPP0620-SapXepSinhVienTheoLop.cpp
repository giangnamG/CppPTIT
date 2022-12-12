#include<bits/stdc++.h>
using namespace std;

class SV{
    private:
        string name,msv,email,lop;
    public:
        friend istream &operator >> (istream &cin,SV &x){
            getline(cin,x.msv);
            getline(cin,x.name);
            getline(cin,x.lop);
            getline(cin,x.email);
            return cin;
        }
        string getLop();
        string getMsv();
        friend ostream &operator << (ostream &cout,SV x){
            cout << x.msv<<" "<<x.name<<" "<<x.lop<<" "<<x.email<<"\n";
            return cout;
        }
};
string SV::getLop(){
    return this->lop;
}
string SV::getMsv(){
    return this->msv;
}
bool cmp(SV sv1, SV sv2) {
    if (sv1.getLop() != sv2.getLop())
        return sv1.getLop() < sv2.getLop();
    return sv1.getMsv() < sv2.getMsv();
}

int main(){
    SV sv[1000];
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0;i<n;i++)
        cin >> sv[i];
    sort(sv,sv+n,cmp);
    for(int i=0;i<n;i++)
        cout << sv[i];
}