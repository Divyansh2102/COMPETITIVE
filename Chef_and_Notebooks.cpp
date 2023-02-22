#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,k,n;
    
    cin>>t;
    while(t--){
        cin>>x>>y>>k>>n;
        int arr[n][2];
        for(int i=0;i<n;i++){
            int p,c;
            cin>>p>>c;
            arr[i][0]=p;
            arr[i][1]=c;
        }
        int rem=x-y;
        int flag=0;
        for(int i=0;i<n;i++){
            if(arr[i][0]>=rem && arr[i][1]<=k){
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"\nLuckyChef";
        else
            cout<<"\nUnluckyChef";
    }
    return 0;
}