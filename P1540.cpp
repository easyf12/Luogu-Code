#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,sumn=0,s=0;
	bool f=false;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++)
	{
		a[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		if(s==m)s=0;
		f=false;
		cin>>b[i];
		for(int j=0;j<m;j++)
		{
			if(a[j]==b[i])
			{
				f=true;
				break;
			}
		}
		if(f==false)
		{
			sumn++;
			for(int k=0;k<m;k++)
			{
				if(a[k]==-1){a[k]=b[i];f=true;break;
				}
			}
			if(f==false){a[s]=b[i];s++;
			}
		}
	}
	cout<<sumn<<endl;
	return 0;
}
