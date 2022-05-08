#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	long long x=0,y=0,z=0,f=0,t,j;
	getline(cin,a);
	for(int i=f;i<a.size();i++){
		if(a[i]!=' '){
			if(a[i]=='+'){
				j=1;
				f=i+1;
				break;
			}
			else if(a[i]=='-'){
				j=2;
				f=i+1;
				break;
			}
			else if(a[i]=='?')t=1;
			else if('0'<=a[i]&&a[i]<='9')x=x*10+(a[i]-'0');
		}
	}
	for(int i=f;i<a.size();i++){
		if(a[i]!=' '){
			if(a[i]=='='){
				f=i+1;
				break;
			}
			else if(a[i]=='?')t=2;
			else if('0'<=a[i]&&a[i]<='9')y=y*10+(a[i]-'0');
		}
	}
	for(int i=f;i<a.size();i++){
		if(a[i]!=' '){
			if(a[i]=='?')t=3;
			else if('0'<=a[i]&&a[i]<='9')z=z*10+(a[i]-'0');	
		}
	}
	if(j==1){
		if(t==1)cout<<z-y;
		else if(t==2)cout<<z-x;
		else cout<<x+y;
	}
	else{
		if(t==1)cout<<z+y;
		else if(t==2)cout<<x-z;
		else cout<<x-y;
	}
	return 0;
}
