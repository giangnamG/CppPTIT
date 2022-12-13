#include<bits/stdc++.h>
using namespace std;

int k = 1;
string fixName(char s[]){
            string result="";
            char *p = strtok(s," ");
            while (p!=NULL)
            {
                string tmp = p;
                for(int i=0;i<tmp.length();i++)
                    tmp[i] = tolower(tmp[i]);
                tmp[0]-=32;                
                result+=tmp;
                result+=" ";
                p=strtok(NULL," ");
            }
            return result;
        }
class SinhVien{
    private:
        int id;
        char name[100];
        string lop,date;
        float gpa;
    public:
        friend istream &operator >> (istream &cin, SinhVien &x){
            x.id = k++;
            cin.ignore();
            cin.getline(x.name,100);
            getline(cin,x.lop);
            getline(cin,x.date);
            cin >> x.gpa;
            return cin;
        }
        
        friend ostream &operator << (ostream &cout,SinhVien x){
            cout << "B20DCCN"<<setfill('0')<<setw(3)<<x.id<<" ";
            cout << fixName(x.name)<<" "<<x.lop<<" ";
            if(x.date[1]=='/') x.date.insert(0,"0");
            if(x.date[4]=='/') x.date.insert(3,"0");
            cout << x.date<<" ";
            cout << fixed<<setprecision(2)<<x.gpa<<"\n";
            return cout;
        }

};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}