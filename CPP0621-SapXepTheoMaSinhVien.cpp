#include<bits/stdc++.h>
using namespace std;

class SV{
    private:
        string msv,name,Class,email;
    public:
        friend istream &operator >> (istream &cin,SV &x){
            getline(cin,x.msv);
            if(x.msv=="")
                return cin;
            getline(cin,x.name);
            getline(cin,x.Class);
            getline(cin,x.email);
            
            return cin;
        }
        string getMsv();
        friend ostream &operator << (ostream &cout,SV x){
            cout << x.msv <<" "<<x.name<<" "<<x.Class<<" "<<x.email<<"\n";
            return cout;
        }

};
string SV::getMsv(){
    return this->msv;
}
bool cmp(SV sv1,SV sv2){
    return sv1.getMsv()<sv2.getMsv();
}
int main(){
    SV sv[1000];
    int n=0;
    do{
        cin >> sv[n++];
    }while(sv[n-1].getMsv()!="");
    sort(sv,sv+n,cmp);
    for(int i=0;i<n;i++)
        cout << sv[i];
}