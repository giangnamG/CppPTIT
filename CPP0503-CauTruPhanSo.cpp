#include<bits/stdc++.h>

using namespace std;

struct PhanSo
{
    long long a;
    long long b;
};

long long gcd(long long g, long long h){
    return __gcd(g,h);
}

void nhap(PhanSo &p){
    cin >> p.a >> p.b;
}

void rutgon(PhanSo &p){
    struct PhanSo c;
    c.a = p.a;
    c.b = p.b;
    p.a = c.a/gcd(c.a,c.b);
    p.b = c.b/gcd(c.a, c.b);
}
void in(PhanSo &p){
    cout << p.a << "/" << p.b;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}