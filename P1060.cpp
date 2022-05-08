#include <bits/stdc++.h>
using namespace std;
int n,m;
struct things{
	int prize,im;
}a[100];
int f(int s,int mon,int i){
	if(i>m)return s;
	if(mon-a[i].prize>=0){
		int x,y;
		x=f(s+a[i].prize*a[i].im,mon-a[i].prize,i+1);
		y=f(s,mon,i+1);
		if(x>y)return x;
		else return y;
	}
	else return f(s,mon,i+1);
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i].prize>>a[i].im;
	}
	cout<<f(0,n,1);
	return 0;
}
