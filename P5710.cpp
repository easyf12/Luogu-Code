#include <iostream>
#include <cstdio>
#include <cmath>
#include <time.h>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;
int main() 
{
	int a,b,c,d,x;
	cin>>x;
	if(x%2==0&&(x>4&&x<=12))a=1;
	else a=0;
	if(x%2==0||(x>4&&x<=12))b=1;
	else b=0;
	if(x%2==0^(x>4&&x<=12))c=1;
	else c=0;
	if(!(x%2==0||(x>4&&x<=12)))d=1;
	else d=0;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
 	return 0;
}
