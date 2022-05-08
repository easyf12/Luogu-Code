#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
	if(n==1)return false;
	int f=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			f=1;
			break;
		}
	}
	if(f==0)return true;
	else return false;
}
int main(){
	int n;
	cin>>n;
	int a[n+10];
	bool b[n+10]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=prime(a[i]);
	}
	for(int i=1;i<=n;i++){
		if(b[i]==true)cout<<a[i]<<" ";
	}
	return 0;
}
