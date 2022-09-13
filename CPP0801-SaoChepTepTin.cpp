#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    ifstream infile {"PTIT.in"};
    ofstream outfile {"PTIT.out"};
    while(infile>>line)
        outfile << line<<endl;
    outfile.close();
    infile.close();
}