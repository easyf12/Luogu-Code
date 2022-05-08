#include <iostream>
using namespace std;
int main()
{
	int n,a1,a2,b1,b2,c1,c2,x,y,z,d,e,f;
	cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
	for(int i=1;i<=n*2;i++)
	{
		if(a1*a2*i>n)
			x=a1*a2*i;
	}
	for(int i=1;i<=n*2;i++)
	{
		if(b1*b2*i>n)
			y=b1*b2*i;
	}
	for(int i=1;i<=n*2;i++)
	{
		if(c1*c2*i>n)
			z=c1*c2*i;
	}
	d=x;
	e=y;
	f=z;
	x=x-n;
	y=y-n;
	z=z-n;
	if(x<=y)
	{
		if(y<=z)cout<<f;
		else if(y>z)cout<<e;
	}
	else if(x>y)
	{
		if(y>=z)cout<<d;
		else if(y<z)
		{
			if(x>=z)cout<<d;
			else cout<<f;
		}	
	}	
	return 0;
} 
