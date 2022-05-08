#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	char a[n],t;
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		a[i]=s[s.size()-1];
	}
	
	for(int i=0;i<n;i++)
	{ 
		x=a[i]-48;
		if(x%2==0)cout<<"even"<<endl;
		else cout<<"odd"<<endl; 
	}
	return 0;
}
