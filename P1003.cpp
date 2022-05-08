#include <iostream>
using namespace std;
int	a[10000],b[10000],g[10000],k[10000];
int main()
{
	int n,x,y;
	cin>>n;
	for(int e=0;e<n;e++)
	{
		cin>>a[e]>>b[e]>>g[e]>>k[e];
	}
	cin>>x>>y;
	for(int e=n-1;e>=0;e--)
	{
		if(a[e]<=x&&a[e]+g[e]>=x&&b[e]<=y&&b[e]+k[e]>=y){cout<<e+1;return 0;
		}
	}
	cout<<"-1";
	return 0;
} 
