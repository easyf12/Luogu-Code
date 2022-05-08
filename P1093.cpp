#include <iostream>
using namespace std;
int main()
{
	int n,s,w,t;
	cin>>n;
	int a[n],b[n],y[n];
	for(int i=0;i<n;i++)
	{
		cin>>y[i]>>s>>w;
		a[i]=y[i]+s+w;
		b[i]=i+1;
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1]){t=a[i];a[i]=a[i+1];a[i+1]=t;
		} 
	}
	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			if(y[i]==y[i+1])
			{
				if(b[i]>b[i+1])
				{
					t=b[i];
					b[i]=b[i+1];
					b[i+1]=t; 
				} 
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<b[i]<<" "<<a[i]<<endl;
	}
	return 0;
}
