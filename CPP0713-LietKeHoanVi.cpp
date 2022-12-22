#include<bits/stdc++.h>
using namespace std;
int n;
int a[100]={0};
bool b[100]={false};
void in(){
	for(int i=1;i<=n;i++)
		cout << a[i];
	cout <<" ";
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!b[j]){
			b[j]=true;
			a[i]=j;
			if(i==n)
				in();
			else 
				Try(i+1);
			b[j]=false;			
		}
	}
}
void process(){
	cin >> n;
	Try(1);
	cout <<"\n";
}
int main(){
	int t;
	cin >> t;
	while(t--)
		process();

}

