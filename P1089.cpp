#include <iostream>
using namespace std;
int main()
{
	int a,b=0,X=0,y=0,f=0;
	for(int i=1;i<=12;i++)
	{
		cin>>a;
		b=b+300;
		if(b>=a)b=b-a;
		else 
		{
			X=X-1;
			f=1;		
		}	
	}
	if(f==0)cout<<b+b/100*20;
	return 0;
}
