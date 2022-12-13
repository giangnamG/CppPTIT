#include<bits/stdc++.h>
using namespace std;

int k = 1;
string fixName(char s[]){
    string res = "";
    char *p = strtok(s," ");
    while(p!=NULL){
        string tmp = p;
        for(int i=0;i<tmp.length();i++)
            tmp[i]=tolower(tmp[i]);
        tmp[0]-=32;tmp+=" ";
        res += tmp;
        p = strtok(NULL," ");
    }
    return res;
}
string fixBirthday(string s){
    if(s[1]=='/')
        s.insert(0,"0");
    if(s[4]=='/')
        s.insert(3,"0");
    return s;
}


class SinhVien{
    private:
        
    public:
        int id;
        string name,lop,date;
        float gpa;

    friend istream &operator >> (istream &cin,SinhVien &x){
        x.id = k++;
        scanf("\n");
        char s[100];
        cin.getline(s,100);
        x.name = fixName(s);
        getline(cin,x.lop);
        getline(cin,x.date);
        x.date = fixBirthday(x.date);
        cin >> x.gpa;
        return cin;
    }
    friend ostream &operator << (ostream &cout,SinhVien x){
        cout << "B20DCCN"<<setfill('0')<<setw(3)<<x.id<<" ";
        cout << x.name<<x.lop<<" "<<x.date<<" ";
        cout << fixed<< setprecision(2)<<x.gpa<<"\n";
        return cout;
    }
};
void sapxep(SinhVien a[50],int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i].gpa < a[j].gpa){
                SinhVien tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}