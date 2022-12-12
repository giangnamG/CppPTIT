#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
    char name[30];
    string date,lop;
    float gpa;
};
void nhapThongTinSV(SinhVien &a){
    cin.getline(a.name,30);
    cin >> a.lop;
    cin >> a.date;
    cin >> a.gpa;
}
void inThongTinSV(SinhVien a){
    cout << "N20DCCN001\t";
    cout << a.name<<"\t"<<a.lop<<"\t";
    if(a.date[1]=='/') a.date.insert(0,"0");
    if(a.date[4]=='/') a.date.insert(3,"0");
    cout << a.date<<"\t";
    cout << fixed << setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}