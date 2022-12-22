#include <bits/stdc++.h>
using namespace std;

int id_kh=1,id_mh=1,id_hd=1;
class HD;

class KH{
       
    public:
    	string ma,ten,gioitinh,ngaysinh,diachi;
    	friend class HD;
};
class MH{		
	public:
		string ma,ten,dvt;
		int buy,sell;
		friend class HD;
};
class HD{
	public:
		string maHd,maKh,maMh;
		int slot;
	
};
map <string,KH> m_kh;
map <string,MH> m_mh;
vector <HD> v_hd;
string tostring(int n){
	string res = "";
	while(n>0){
		res += n%10 + '0';
		n/=10;
	}
	reverse(res.begin(),res.end());
	return res;
}
void getKH(){
	ifstream ifs ("KH.in");
	int n;
	ifs >> n; ifs.ignore();
	for(int i=0;i<n;i++){
		KH kh;
		getline(ifs,kh.ten);		
		getline(ifs,kh.gioitinh);
		getline(ifs,kh.ngaysinh);
		getline(ifs,kh.diachi);
		string ma = "KH";
		if(i+1<10)
			ma += "00"+tostring(i+1);
		else if(i+1<100)
			ma += "0"+tostring(i+1);
		else
			ma += tostring(i+1);
		m_kh[ma] = kh;
	}
}
void getMH(){
	ifstream ifs ("MH.in");
	int n;
	ifs >> n; ifs.ignore();
	for(int i=0;i<n;i++){
		MH mh;
		getline(ifs,mh.ten);		
		getline(ifs,mh.dvt);
		ifs >> mh.buy;
		ifs >> mh.sell;
		ifs.ignore();
		string ma = "MH";
		if(i+1<10)
			ma += "00"+tostring(i+1);
		else if(i+1<100)
			ma += "0"+tostring(i+1);
		else
			ma += tostring(i+1);
		m_mh[ma] = mh;
		
	}
}
void getHD(){
	ifstream ifs ("HD.in");
	int n;
	ifs >> n; ifs.ignore();
	for(int i=0;i<n;i++){
		HD hd;
		ifs >> hd.maKh;		
		ifs >> hd.maMh;
		ifs >> hd.slot;
		ifs.ignore();
		string ma = "HD";
		if(i+1<10)
			ma += "00"+tostring(i+1);
		else if(i+1<100)
			ma += "0"+tostring(i+1);
		else
			ma += tostring(i+1);
		hd.maHd = ma;
		
		v_hd.push_back(hd);
	}	
}
void printHD(){
	for(int i=0;i<v_hd.size();i++){
		cout << v_hd[i].maHd<<" "<< m_kh[v_hd[i].maKh].ten <<" "<<m_kh[v_hd[i].maKh].diachi<<" "<<m_mh[v_hd[i].maMh].ten<<" "<<m_mh[v_hd[i].maMh].dvt<<" ";
		cout << m_mh[v_hd[i].maMh].buy <<" "<<m_mh[v_hd[i].maMh].sell<<" "<<v_hd[i].slot<<" "<< v_hd[i].slot*m_mh[v_hd[i].maMh].sell<<"\n";
	}
}
int main(){
	getKH();
	getMH();
	getHD();
	printHD();
}
