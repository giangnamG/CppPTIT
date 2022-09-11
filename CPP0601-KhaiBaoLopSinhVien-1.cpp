#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string name,Class,birthday;
        float gpa;
    public:
        void nhap(){
            getline(cin,name);
            getline(cin,Class);
            getline(cin,birthday);
            cin >> gpa;
            cin.ignore();
        }
        void xuat(){
            if(birthday[1]=='/')
                birthday.insert(0,"0");
            if(birthday[birthday.length()-5]=='/'&&birthday[birthday.length()-7]=='/')
                birthday.insert(birthday.length()-6,"0");
            cout << "B20DCCN001 "<<name<<" "<<Class<<" "<<birthday<<" ";
            cout << fixed<<setprecision(2)<< gpa;
        }
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}