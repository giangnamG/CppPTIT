#include<bits/stdc++.h>
using namespace std;
class PhanSo{
    private:
        long long tu,mau;
    public:
        PhanSo(long long tu,long long mau){
            this->tu = tu;
            this->mau = mau;
        }
        friend istream &operator >> (istream &cin, PhanSo &x){
            cin >> x.tu >> x.mau;
            return cin;
        }
        void rutgon(){
            long long c=this->tu,d=this->mau;
            this->tu=this->tu/__gcd(c,d);
            this->mau=this->mau/__gcd(c,d);
        }
        friend ostream &operator << (ostream &cout, PhanSo x){
            
            cout << x.tu<<"/"<<x.mau;
            return cout;
        }

};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}