#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private: 
        string name,Class,birthday;
        float gpa;
    public:
        friend istream &operator >> (istream &cin,SinhVien &x){
            getline(cin,x.name);
            getline(cin,x.Class);
            getline(cin,x.birthday);
            cin >> x.gpa;
            return cin;
        }
        friend ostream &operator << (ostream &cout,SinhVien x){
            if(x.birthday[1]=='/')
                x.birthday.insert(0,"0");
            if(x.birthday[4]=='/')
                x.birthday.insert(3,"0");
            x.name[0]=toupper(x.name[0]);
            for(int i=0;i<x.name.length();i++)
                if(x.name[i]==' ')
                    x.name[i+1]=toupper(x.name[i+1]);
                else
                    x.name[i+1]=tolower(x.name[i+1]);
            cout <<"B20DCCN001 "<<x.name<<" "<<x.Class<<" "<<x.birthday<<" ";
            cout << fixed << setprecision(2)<<x.gpa;
            return cout;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}