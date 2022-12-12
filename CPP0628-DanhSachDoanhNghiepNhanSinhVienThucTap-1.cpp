#include<bits/stdc++.h>
using namespace std;

class DN{
    private:
        string name,ma;
        int slot;
    public:
        friend istream &operator >> (istream &,DN &);
        friend ostream &operator << (ostream &,DN );
        int getSlot();
        string getMa();
};
istream &operator >> (istream &cin,DN &x){
    getline(cin,x.ma);
    getline(cin,x.name);
    cin >> x.slot;
    cin.ignore();
    return cin;
}
string DN::getMa(){
    return this->ma;
}
int DN::getSlot(){
    return this->slot;
}
ostream &operator << (ostream &cout,DN x){
    cout << x.ma<<" "<<x.name<<" "<<x.slot<<"\n";
    return cout;
}
bool cmp(DN a,DN b){
    if(a.getSlot()==b.getSlot())
        return a.getMa()<b.getMa();
    return a.getSlot()>b.getSlot();
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    DN dn[100];
    for(int i=0;i<n;i++)
        cin >> dn[i];
    sort(dn,dn+n,cmp);
    for(int i=0;i<n;i++)
        cout << dn[i];
}