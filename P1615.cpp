#include <iostream>
#include <cstring> 
using namespace std;
long long summ(char a[])
{
	long long sum=0,shi=0,fen=0,miao=0,i=0;
	while(a[i]!=':')
	{
		shi=shi*10+(a[i]-48)*60*60;
		i++;
	}
	i++;
	while(a[i]!=':')
	{
		fen=fen*10+(a[i]-48)*60;
		i++;
	}
	i++;
	while(a[i]!='\0')
	{
		miao=miao*10+(a[i]-48);
		i++;
	}
	sum=shi+fen+miao;
	return sum;
}
int main() 
{
	long long n,x,y,sum=0;
	char a[100],b[100];
	cin>>a>>b;
	cin>>n;
	x=summ(a);
	y=summ(b);
	for(long long i=x;i<y;i++)
	{
		sum=sum+n;
	}
	cout<<sum;
	return 0;
}
