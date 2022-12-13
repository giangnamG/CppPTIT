#include<bits/stdc++.h>
using namespace std;

class DN{
    private:
        string name,ma;
        int slot;
    public:
        friend istream &operator >> (istream &,DN &);
        friend ostream &operator << (ostream &,DN );
        string getMa();
        int getSlot();
};
istream &operator >> (istream &cin,DN &x){
    getline(cin,x.ma);
    getline(cin,x.name);
    cin >> x.slot;
    cin.ignore();
    return cin;
}
ostream &operator << (ostream &cout,DN x){
    cout << x.ma<<" "<<x.name<<" "<<x.slot<<"\n";
    return cout;
}
string DN::getMa(){
    return this->ma;
}
int DN::getSlot(){
    return this->slot;
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
    vector<pair<int,int>> v;
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b;
        cin >> a>> b;
        int c = a+b;
        a = min(a,b);
        b = c-a;
        v.push_back({a,b});
    }
    for(pair<int,int> x: v){
        cout <<"DANH SACH DOANH NGHIEP NHAN TU "<<x.first<<" DEN "<<x.second<<" SINH VIEN:\n";
        for(int i=0;i<n;i++)
            if(dn[i].getSlot()>=x.first&&dn[i].getSlot()<=x.second)
                cout << dn[i];
    }
}