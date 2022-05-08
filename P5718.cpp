#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,min=10000;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x<min)min=x;
	}
	cout<<min<<endl;
	return 0;
}

