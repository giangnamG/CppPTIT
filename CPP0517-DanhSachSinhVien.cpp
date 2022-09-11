#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
    int mnv[6]={0};
    string name,sex,birthday,address,code,date;
};
int flag=1,stt=0;
void nhap(NhanVien &x){
    if(flag){
        cin.ignore();
        flag=0;
    }
    stt++;
    int tmp=stt,len=4;
    while(tmp>0){
        x.mnv[len--]=tmp%10;
        tmp/=10;
    }
    getline(cin,x.name);
    getline(cin,x.sex);
    getline(cin,x.birthday);
    getline(cin,x.address);
    getline(cin,x.code);
    getline(cin,x.date);
}
void inds(NhanVien x[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++)
            cout << x[i].mnv[j];
        cout <<" "<<x[i].name<<" "<<x[i].sex<<" "<<x[i].birthday<<" ";
        cout <<x[i].address<<" "<<x[i].code<<" "<<x[i].date<<"\n";
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}