#include <bits/stdc++.h>
using namespace std;
int prime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
	int l,i=2,s=0;
	cin>>l;
	while(1>0){
		if(prime(i)){
			if(l-i<0)break;
			else{
				cout<<i<<endl;
				l-=i;
				s++;
			}
		}
		i++;
	}
	cout<<s;
	return 0;
}
