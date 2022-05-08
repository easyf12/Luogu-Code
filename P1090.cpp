#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+10],s=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    /*
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    */
    for(int i=1;i<=n-1;i++){
        a[i+1]=a[i]+a[i+1];
        s+=a[i+1];
        for(int j=i+1;j<n;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
            else break;
        }
    }
    cout<<s;
    return 0;
}
