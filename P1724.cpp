#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=0,y=0,j=0,x1=0,y1=0;
    long long T;
    string a;
    cin>>a;
    cin>>T;
    do{
        if(a[j]=='E')x1++;
        if(a[j]=='S')y1--;
        if(a[j]=='W')x1--;
        if(a[j]=='N')y1++;
        j++;
    }
    while(j<a.size());
    x=x1*(T/a.size());
    y=y1*(T/a.size());
    for(int i=0;i<T%a.size();i++){
        if(a[i]=='E')x++;
        if(a[i]=='S')y--;
        if(a[i]=='W')x--;
        if(a[i]=='N')y++;
    }
    cout<<x<<" "<<y;
    return 0;
}