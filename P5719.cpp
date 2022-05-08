#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i=1;
	float sum1=0,sum2=0,sum11=0,sum21=0;
	cin>>n>>k;
	if(k<=0)cout<<0.0<<" "<<0.0;
	for(int i=1;i<=n;i++)
	{
		if(i%k!=0){sum1+=i;sum11++;
		}
		else{sum2+=i;sum21++;
		}
	}
	printf("%.1f %.1f",sum2/sum21,sum1/sum11);
	return 0;
}
