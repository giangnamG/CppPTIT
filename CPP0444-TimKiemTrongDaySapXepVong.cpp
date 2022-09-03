#include<bits/stdc++.h>
using namespace std;
int binSearch(int a[],int l,int r,int x){
    int mid = (l+r)/2;
    if(l>r)
        return -1;
    else if(a[mid]==x)
        return mid;
    else if(a[mid]>x)
        return binSearch(a,l,mid-1,x);
    else if(a[mid]<x)
        return binSearch(a,mid+1,r,x);
}
void solve(){
    int n,x;
    cin >> n >> x;
    int a[n];
    int index = 0,tmp=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(!tmp)
        	tmp=a[i];
        else{
        	if(tmp>a[i]&&!index)
        		index=i-1;
        	else
        		tmp=a[i];
		}
    }
    int first = binSearch(a,0,index,x);
    int second = binSearch(a,index+1,n-1,x);
    first==1 ?cout<<first+1:cout<<second+1<<"\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
