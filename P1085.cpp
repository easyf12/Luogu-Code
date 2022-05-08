#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y,z=0,j;
	for(int i=1;i<=7;i++)
	{
		cin>>x>>y;
		n=x+y;
		if(n>7)
		{
			if(n>j)
			{
				j=n;
				z=i;
			}
		}
	}
	if(z==0)cout<<1;
	else cout<<z;
	return 0;
}
