#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float x;
	cin>>n;
	if(n<=150)x=n*0.4463;
	else if(n>=151&&n<=400)x=150*0.4463+(n-150)*0.4663;
	else if(n>=401)x=150*0.4463+(400-150)*0.4663+(n-400)*0.5663;
	printf("%.1f",x);
	return 0;
}
