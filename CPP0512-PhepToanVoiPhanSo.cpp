#include <bits/stdc++.h>
using namespace std;

long long ucln(long long a,long long b){
	if(a==0)
		return b;
	return ucln(b%a,a);
}
struct PhanSo{
	long long tu,mau;
};
PhanSo C(PhanSo A,PhanSo B){
	PhanSo c;
	long long tu = A.tu*B.mau+B.tu*A.mau;
	long long mau = A.mau*B.mau;
	c.tu = pow(tu/ucln(tu,mau),2);
	c.mau = pow(mau/ucln(tu,mau),2);
	return c;
}
PhanSo D(PhanSo a,PhanSo b,PhanSo c){
	long long tu = a.tu*b.tu*c.tu;
	long long mau = a.mau*b.mau*c.mau;
	PhanSo d;
	d.tu = tu/ucln(tu,mau);
	d.mau = mau/ucln(tu,mau);
	if(d.tu<0&&d.mau<0){
		d.tu = abs(d.tu);
		d.mau = abs(d.mau);
	}else if(d.tu>0&&d.mau<0){
		d.tu = -1*(d.tu);
		d.mau = abs(d.mau);
	}
	return d;
}
void process(PhanSo A,PhanSo B){
	PhanSo c = C(A,B);
	cout << c.tu <<"/"<<c.mau<<" ";
	PhanSo d = D(A,B,c);
	cout << d.tu <<"/"<<d.mau<<"\n";

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}