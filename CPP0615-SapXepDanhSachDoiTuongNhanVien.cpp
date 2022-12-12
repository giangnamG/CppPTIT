#include<bits/stdc++.h>
using namespace std;

int k = 1;
class NhanVien{
    public:
        int id;
        char birthday[100];
        string name,sex,addr,code,date;
        friend istream &operator >> (istream &cin, NhanVien &x){
            scanf("\n");
            x.id = k++;
            getline(cin,x.name);
            getline(cin,x.sex);
            cin.getline(x.birthday,100);
            getline(cin,x.addr);
            getline(cin,x.code);
            getline(cin,x.date);
            return cin;
        }
        
        friend ostream &operator << (ostream &cout,NhanVien x){
            cout << setfill('0')<<setw(5)<<x.id<<" ";
            cout << x.name<<" "<<x.sex<<" "<<(x.birthday)<<" "<<x.addr<<" "<<x.code<<" "<<x.date<<"\n";
            return cout;
        }

};
string rev(char a[]){
    char *x = new char(100);
    char tmp[100];
    strcpy(tmp,a);
    char *p = strtok(tmp,"/");
    string month = p;
    p = strtok(NULL,"/");
    string day = p;
    p = strtok(NULL,"/");
    string year = p;
    string res = year+month+day;
    return res;
}
void sapxep(NhanVien a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
            {
                char x[100],y[100];
                strcpy(x,rev(a[i].birthday).c_str());
                strcpy(y,rev(a[j].birthday).c_str());
                if(strcmp(x,y)>0){
                    NhanVien tmp = a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
    }
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}