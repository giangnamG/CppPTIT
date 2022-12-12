#include<bits/stdc++.h>
using namespace std;

int k = 1;
class NhanVien{
    public:
        int stt;
        string name,sex,birthday,addr,code,date;

        friend istream &operator >> (istream &cin,NhanVien &x){
            x.stt = k++;
            scanf("\n");
            getline(cin,x.name);
            getline(cin,x.sex);
            getline(cin,x.birthday);
            getline(cin,x.addr);
            getline(cin,x.code);
            getline(cin,x.date);
            return cin;
        }

        friend ostream &operator << (ostream &cout,NhanVien x){
            cout << setfill('0')<<setw(5)<<x.stt<<" ";
            cout << x.name<<" "<<x.sex<<" "<<x.birthday <<" "<<x.addr<<" "<<x.code<<" "<<x.date<<"\n";
            return cout;
        }


};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}