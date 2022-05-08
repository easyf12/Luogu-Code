#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int f[n+1];
	for(int i=0;i<=n;i++)
	{
		f[i]=0;
	}
	f[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=i/2;j++) 
		{
			f[i]+=f[j];
		}
		f[i]++;
	}
	cout<<f[n]<<endl;
	return 0;
}
