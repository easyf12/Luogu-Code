#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,g;
    cin>>n>>l>>g;
    for(int i=1;i<=n;i++){
        int w,h;
        cin>>w>>h;
        while(1>0){
            if(w>g||h>g){
                w=floor(w*1.0/2);
                h=floor(h*1.0/2);
            }
            else break;
        }
        if(w<l||h<l)cout<<"Too Young"<<endl;
        else if(w!=h)cout<<"Too Simple"<<endl;
        else cout<<"Sometimes Naive"<<endl;
    }
    return 0;
}