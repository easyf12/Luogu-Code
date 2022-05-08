#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	int x=0,y=0;
	cin>>a>>b;
	x=x+(a[0]-64);
	for(int i=1;i<strlen(a);i++)
	{
		x=x*(a[i]-64);
	}
	x=x%47;
	y=y+(b[0]-64);
	for(int i=1;i<strlen(b);i++)
	{
		y=y*(b[i]-64);
	}
	y=y%47;
	if(x==y)cout<<"GO";
	else cout<<"STAY"; 
	return 0;
}
