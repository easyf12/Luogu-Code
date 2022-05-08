#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,n,d,end;
	cin>>a>>b>>n;
	d=b-a;
	end=a+d*(n-1);
	cout<<(a+end)*n/2;
	return 0;
}
