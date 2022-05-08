#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[100];
	int n;
	cin>>n>>a;
	for(int i=0;i<strlen(a);i++)
	{
		a[i]=a[i]+n;
		if(a[i]>122)a[i]=a[i]-26;
	} 
	cout<<a;
	return 0;
}

