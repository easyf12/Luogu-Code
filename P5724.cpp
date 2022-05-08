#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,min=10000,max=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x>max)max=x;
		if(x<min)min=x;
	}
	cout<<max-min;
	return 0;
}

