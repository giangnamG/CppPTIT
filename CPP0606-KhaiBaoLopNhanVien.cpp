#include<bits/stdc++.h>
using namespace std;
class NhanVien{
    private:
        string name,sex,birthday,address,taxCode,date;
    public:
        void nhap(){
            getline(cin,this->name);
            getline(cin,this->sex);
            getline(cin,this->birthday);
            getline(cin,this->address);
            getline(cin,this->taxCode);
            getline(cin,this->date);
        }
        string chuanhoa(string s){
            if(s[1]=='/')
                s.insert(0,"0");
            if(s[4]=='/')
                s.insert(3,"0");
            return s;
        }
        void xuat(){
            this->birthday = chuanhoa(this->birthday);
            this->date     = chuanhoa(this->date);
            cout <<"00001 "<<this->name<<" "<<this->sex<<" "<<this->birthday<<" "<<this->address<<" "<<this->taxCode;
            cout <<" "<<this->date;
        }
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}