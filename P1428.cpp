#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000],x,b[1000]={0};
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>a[i];
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i])b[i]++;
		}
	}
	for(int i=0;i<x;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
