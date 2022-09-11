#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    string name,sex,birthday,address,phone,date;
};
void nhap(NhanVien &x){
    getline(cin,x.name);
    getline(cin,x.sex);
    getline(cin,x.birthday);
    getline(cin,x.address);
    getline(cin,x.phone);
    getline(cin,x.date);
}
void in(NhanVien a){
    cout <<"00001 "<<a.name<<" "<<a.sex<<" "<<a.birthday<<" "<<a.address<<" "<<a.phone<<" "<<a.date;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}