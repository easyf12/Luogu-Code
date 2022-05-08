#include<bits/stdc++.h>
using namespace std;
int n,r,a[10000];
void f(int s,int x,int z){
	if(s==0){
		for(int i=1;i<=r;i++){
			cout<<setw(3)<<a[i];
		}
		cout<<endl;
		return;
	}
	for(int i=x;i<=n;i++){
		a[z]=i;
		f(s-1,i+1,z+1);
	}
}
int main(){
	cin>>n>>r;
	f(r,1,1);
	return 0;
}
