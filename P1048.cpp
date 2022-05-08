#include <bits/stdc++.h>
using namespace std;
int t,m,dp[1200][500];
struct c{
	int t1,m1;
}a[500];
int f(int ti,int i){
	if(dp[ti][i])return dp[ti][i];
	if(ti-a[i].t1<0){
		dp[ti][i+1]=f(ti,i+1);
		return dp[ti][i+1];
	}
	if(i>m)return 0;
	int x=f(ti-a[i].t1,i+1)+a[i].m1,y=f(ti,i+1);
	if(x>y){
		dp[ti-a[i].t1][i+1]=x-a[i].m1;
		return x;
	}
	else{
		dp[ti][i+1]=y;
		return y;
	}
}
int main(){
	cin>>t>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i].t1>>a[i].m1;
	}
	cout<<f(t,1);
	return 0;
} 
