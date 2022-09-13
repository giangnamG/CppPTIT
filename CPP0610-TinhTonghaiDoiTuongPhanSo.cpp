#include<bits/stdc++.h>
using namespace std;

class PhanSo{
    private: 
        long long tu,mau;
    public:
        PhanSo(long long a,long long b){
            this->tu=a;
            this->mau=b;
        }
        friend istream &operator >> (istream &cin,PhanSo &x){
            cin >> x.tu >> x.mau;
            return cin;
        }
        friend PhanSo operator + (PhanSo a,PhanSo b){
            PhanSo x(1,1);
            x.tu = a.tu*b.mau+b.tu*a.mau;
            x.mau = a.mau*b.mau;
            long long c = x.tu,d=x.mau;
            x.tu /= __gcd(c,d);
            x.mau/=__gcd(c,d);
            return x;
        }
        friend ostream &operator << (ostream &cout,PhanSo x){
            cout << x.tu<<"/"<<x.mau;
            return cout;
        }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}