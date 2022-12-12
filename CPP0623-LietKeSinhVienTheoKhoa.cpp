#include<bits/stdc++.h>
using namespace std;

class SV{
    private:
        string name,msv,lop,email;
        int k;
    public:
        friend istream &operator >> (istream &cin,SV &x){
            getline(cin,x.msv);
            getline(cin,x.name);
            getline(cin,x.lop);
            getline(cin,x.email);
            string s = x.lop.substr(1,2);// neu sub sai hay thay doi x.lop.substr(1,2) thanh x.msv.substr(1,2) vi tai thoi diem nay de bai bi sai
            x.k = (s[0]-'0')*10+(s[1]-'0')+2000;
            return cin;
        }
        int getK();
        friend ostream &operator << (ostream &cout,SV x){
            cout <<x.msv<<" "<<x.name<<" "<<x.lop<<" "<<x.email<<"\n";
            return cout;
        }

};
int SV::getK(){
    return this->k;
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
    int a[m];
    for(int i=0; i<m; i++)
        cin >> a[i];
    for(int i=0; i<m; i++){
        cout <<"DANH SACH SINH VIEN KHOA "<<a[i]<<":\n";
        for(int j=0; j<n; j++)
            if(a[i]==sv[j].getK())
                cout << sv[j];
    }

}