#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    string name,Class,birthday;
    float gpa;
};
void nhapThongTinSV(struct SinhVien &a){
    getline(cin,a.name);
    getline(cin,a.Class);
    getline(cin,a.birthday);
    cin >> a.gpa;
}
void inThongTinSV(struct SinhVien a){
    if(a.birthday[1]=='/')
        a.birthday.insert(0,"0");
    if(a.birthday[4]=='/')
        a.birthday.insert(3,"0");
    cout <<"N20DCCN001 "<< a.name<<" "<<a.Class<<" "<<a.birthday<<" ";
    cout << fixed << setprecision(2)<<a.gpa<<endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}