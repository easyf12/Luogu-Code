#include <bits/stdc++.h>
using namespace std;
double dis(int x1,int y1,int x2,int y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main(){
	double x1,y1,x2,y2,x3,y3;
	double C;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	C=dis(x1,y1,x2,y2)+dis(x1,y1,x3,y3)+dis(x2,y2,x3,y3);
	printf("%.2lf",C);
	return 0;
}
