#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,Class,birthday;
    float gpa;
};
void nhap(SinhVien &a){
    getline(cin,a.name);
    getline(cin,a.Class);
    getline(cin,a.birthday);
    cin >> a.gpa;
}
void in(SinhVien &a){
    if(a.birthday[1]=='/')
        a.birthday.insert(0,"0");
    if(a.birthday[a.birthday.length()-5]=='/'&&a.birthday[a.birthday.length()-7]=='/')
        a.birthday.insert(a.birthday.length()-6,"0");
    cout <<"B20DCCN001 "<<a.name<<" "<<a.Class<<" "<<a.birthday<<" "<<fixed<<setprecision(2)<<a.gpa<<"\n";
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}