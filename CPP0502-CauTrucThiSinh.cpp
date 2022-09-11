#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
    string name,birthday;
    float total=0;
};

void nhap(ThiSinh &sv){
    getline(cin,sv.name);
    getline(cin,sv.birthday);
    float point;
    for(int i=0;i<3;i++){
        cin >> point;
        sv.total+=point;
    }
}
void in(ThiSinh sv){
    cout << sv.name<<" "<< sv.birthday<<" "<< fixed<< setprecision(1)<<sv.total;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}