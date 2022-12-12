#include<bits/stdc++.h>
using namespace std;

struct PhanSo{
	int tu, mau;
};
int ucln(int a,int b){
	if(a==0)
		return b;
	return (a%b,b);
}
void process(PhanSo a, PhanSo b){
	PhanSo c;
	c.tu = a.mau*b.tu+a.tu*b.mau;
	c.mau = a.mau*b.mau;
	c.tu *= c.tu;
	c.mau *= c.mau;
	int u = ucln(c.tu,c.mau);
	c.tu /= u;
	c.mau /= u;
	cout << c.tu<<"/"<<c.mau<<" ";
	PhanSo d;
	d.tu = a.tu*b.tu*c.tu;
	d.mau = a.mau*b.mau*c.mau;
	u = ucln(d.tu,d.mau);
	cout << d.tu/u<<"/"<<d.mau<<"\n";  
	
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
