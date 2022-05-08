#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a[1000],x=0;
	while(1)
	{
		cin>>a[x];
		if(a[x]==0)
		{
			break;
		}
		x++;
	}
	for(int i=x-1;i>=0;i--)

		cout<<a[i]<<" ";
		return 0;
} 
