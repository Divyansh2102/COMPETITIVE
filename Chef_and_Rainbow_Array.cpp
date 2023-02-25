#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int i=0,j=n-1,flag=1;
        if(a[0]!=1) flag=0;
        while(i<j){
            if(a[i]!=a[i+1] && a[i+1]!=a[i]+1){
                flag=0;
                break;
            }
            if(a[i]!=a[j]){
                flag=0;
                break;
            }
            i++,j--;
        }
        if(a[i]!=7) flag=0;
        if(flag==0)
            cout<<"no\n";
        else
            cout<<"yes\n";
    }
    return 0;
}