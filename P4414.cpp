#include <iostream>
using namespace std;
int main()
{
	int a,b,c,t;
	char x,y,z;
	cin>>a>>b>>c;
	cin>>x>>y>>z;
	if(a>b){t=a;a=b;b=t;
	}
	if(a>c){t=a;a=c;c=t;
	}
	if(b>c){t=b;b=c;c=t;
	}
	if(x=='A')
	{
		if(y=='B')
		{
			cout<<a<<" "<<b<<" "<<c;
		}
		else cout<<a<<" "<<c<<" "<<b;
	}
	if(x=='B')
	{
		if(y=='A')
		{
			cout<<b<<" "<<a<<" "<<c;
		}
		else cout<<b<<" "<<c<<" "<<a;
	}
	if(x=='C')
	{
		if(y=='A')
		{
			cout<<c<<" "<<a<<" "<<b;
		}
		else cout<<c<<" "<<b<<" "<<a;
	}
	return 0;
}
