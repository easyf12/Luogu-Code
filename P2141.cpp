#include <bits/stdc++.h>
using namespace std;
int main()
{
	int	a[200],x,z=0,b[200];
	cin>>x;
	memset(b,-1,sizeof(b));
	for(int i=0;i<x;i++)
		cin>>a[i];
	sort(a,a+x);
	for(int i=2;i<x;i++)
	{
		for(int j=0;j<=i;j++)
		{
			for(int k=j+1;k<=i;k++)
			{
				if(b[i]&&a[i]==a[j]+a[k])
				{
					b[i]=0;
					z++;
				}
			}
		}
	}
	cout<<z;
	return 0;
}
