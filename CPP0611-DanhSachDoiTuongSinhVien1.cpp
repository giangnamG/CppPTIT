#include<bits/stdc++.h>

using namespace std;
int k = 1;
class SinhVien{
public: 
    int id;
    string name,lop,date;
    float gpa;
        friend istream &operator >> (istream &input, SinhVien &a){
            a.id = k;
            scanf("\n");
            getline(input, a.name);
            getline(input, a.lop);
            getline(input, a.date);
            input >> a.gpa;
            k++;
            return input;
        }
        friend ostream &operator<< (ostream & output, SinhVien &a){
            cout << "B20DCCN" << setfill('0') << setw(3) << a.id << " ";
            cout << a.name << " " << a.lop << " ";
            if(a.date[2] != '/') a.date.insert(0,"0");
            if(a.date[5] != '/') a.date.insert(3,"0");
            cout << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
            return output;
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