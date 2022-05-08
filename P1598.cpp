#include <bits/stdc++.h>
using namespace std;
int p[200];
void g(string a){
    for(int i=0;i<a.size();i++){
        if('A'<=a[i]&&a[i]<='Z')p[a[i]]++;
    }
}
int main(){
    int maxn=190;
    string a,b,c,d;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	getline(cin,d);
    for(int i=0;i<200;i++){
        p[i]=0;
    }
    p[maxn]=-1;
    g(a);g(b);g(c);g(d);
	/*
    for(int i='A';i<='Z';i++){
        cout<<char(i);
        for(int j=1;j<=p[i];j++)
            cout<<'*'<<' ';
        cout<<endl;
    }
    */
    for(int i='A';i<='Z';i++){
        if(p[i]>p[maxn])maxn=i;
    }
    //cout<<maxn;
    for(int i=p[maxn];i>0;i--){
		for(int j='A';j<='Z';j++){
			if(j=='Z'){
				if(p[j]>=i)cout<<"*";
				else cout<<" ";
			}
			else{
				if(p[j]>=i)cout<<"* ";
				else cout<<"  ";
			}
		}
		cout<<endl;
    }
    for(char i='A';i<='Z';i++){
		if(i=='Z')cout<<i;
		else cout<<i<<' ';
    }
    return 0;
}
