#include <bits/stdc++.h>
using namespace std;
int a[1000],v,n;
int s(int t,int r){
	int x,y;
	if(t>n)return r;
	if(r-a[t]<0)return s(t+1,r);
	if(r-a[t]==0)return r-a[t];
	x=s(t+1,r-a[t]);
	y=s(t+1,r);
	if(x<y)return x;
	else return y; 
}
int main(){
	cin>>v>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<s(1,v);
	return 0;
}
