#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
    long long tu,mau;
};
void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}
long long ucln(long long a, long long b){
    if(a==0)
        return b;
    return ucln(b%a,a);
}
struct PhanSo tong(PhanSo a,PhanSo b){
    PhanSo tmp;
    tmp.tu = a.tu*b.mau+b.tu*a.mau;
    tmp.mau= a.mau*b.mau;
    long long u = ucln(tmp.tu,tmp.mau);
    tmp.tu /= u;
    tmp.mau/= u;
    return tmp;
}
void in(PhanSo p){
    cout << p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}