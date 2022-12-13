// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t,n;
// 	cin >> t;
// 	while(t--){
// 		cin >> n;
// 		int a[n];
// 		for(int i=0;i<n;i++)
// 			cin >>a[i];
// 		sort(a,a+n);
// 		int count=0;
// 		int b[n]={0};
// 		int flag=0;
// 		for(int i=0;i<n-1;i++){
// 			if(a[i]==a[i+1]){
// 				if(!flag){
// 					b[i]=1;
// 					flag=1;
// 				}
// 				count++;
// 			}else
// 				flag=0;
// 		}
// 		for(int i=0;i<n;i++)
// 			if(b[i])
// 				count++;
// 		cout << count<<endl;
// 	}
// // 1 1 1 2 2 2 3 4 5 5 
// }
// c2
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int n ;
	while (t--)
	{
		map <int,int> m;
		map <int,int> :: iterator it;
		cin >> n;
		int x;
		for(int i=0;i<n;i++){
			cin >> x;
			m[x]++;
		}
		int sum=0;
		for(it=m.begin();it!=m.end();it++)
			if(it->second>1)
				sum+=it->second;
		cout << sum<<"\n";
	}
	
}

