#include <bits/stdc++.h>
using namespace std;
int n,k,a[101],s=0;
bool prime(int f){
	if(f==1)return false;
	for(int i=2;i*i<=f;i++){
		if(f%i==0)return false;
	}
	return true;
}
void dfs(int p,int r,int t){
	if(t>n+1)return;
	else if(p==k){
		if(prime(r)==true)s++;
	}
	else {
		for(int i=t;i<=n;i++){
			dfs(p+1,r+a[i],i+1);
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dfs(0,0,1);
	cout<<s;
	return 0;
}
