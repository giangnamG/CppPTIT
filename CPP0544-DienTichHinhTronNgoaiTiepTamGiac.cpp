#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
void process(){
	double x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >>x2 >> y2 >> x3 >> y3;

	double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double c = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	if(a+b<=c||a+c<=b||b+c<=a){
		cout <<"INVALID";
	}else{
		double s = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
		double r = (a*b*c)/(4*s);
		double S = PI*r*r;
		cout << fixed<<setprecision(3) << S;
	}
	cout <<"\n";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		process();
	}

}

