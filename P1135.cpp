#include <bits/stdc++.h>
using namespace std;
int f[202],n,a,b;
int g(int t,int r,int z){
	int x=-1,y=-1;
	if(f[z]==f[t]&&(t+f[t]>n||t-f[t]<1))return -1;
	if(t==b)return r;
	if(t+f[t]<=n)x=g(t+f[t],r+1,t);
	if(t-f[t]>=1)y=g(t-f[t],r+1,t);
	if(x==-1&&y!=-1)return y;
	else if(x!=-1&&y==-1)return x;
	else if(x==-1&&y==-1)return -1;
	else{
		if(x>y)return y;
		else return x;
	}
}
int main(){
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>f[i];
	}
	cout<<g(a,0,0);
	return 0;
} 
