#include<bits/stdc++.h>
using namespace std;
int main(){
	double x1,y1,x2,y2;
	int t;
	cin >> t;
	while(t--){
		cin >> x1 >> y1 >> x2 >> y2;
		double kc = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
		cout <<fixed<<setprecision(4)<< kc <<endl;
	}

}

