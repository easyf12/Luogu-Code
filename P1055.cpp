#include <iostream>
using namespace std;
int main()
{
	char a[100];
	int x=0,k=0,y;
	cin>>a;
	for(int i=0;i<=10;i++)
	{
		if(i!=1&&i!=5)
		{
			y=a[i]-48;
			k++;
			x=x+y*k;
		}
	}
	x=x%11;
	if(x==a[12]-48||(x==10&&a[12]=='X'))
		cout<<"Right";
	else 
	{
		if(x==10){x='X';a[12]=x;cout<<a;
		}
		else {
			a[12]=x+48;
			cout<<a;
		}
	}
	return 0;
}
