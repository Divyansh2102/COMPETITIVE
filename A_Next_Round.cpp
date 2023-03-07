#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    if(k<1)
        cout<<0<<endl;
    else{
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        int maxi=v[k-1],c=0;
        for(int i=0;i<n;i++){
            if(v[i]>=maxi && v[i]!=0)
                c+=1;
        }
        cout<<c<<endl;
    }
    return 0;
}