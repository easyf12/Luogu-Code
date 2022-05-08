#include <iostream>
using namespace std;
int main()
{
	int n,max;
	cin>>n;
	int a[n];
	cin>>a[0];
	max=a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=max)max=a[i];
	}
	int b[max];
	for(int i=0;i<max;i++)
		b[i]=0; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<max;j++)
		{
			if(j==a[i])b[j]++;
		}
	}
	for(int i=0;i<max;i++)
	{
		if(b[i]%2!=0){cout<<i;break;
		}
	}
	return 0;
}
