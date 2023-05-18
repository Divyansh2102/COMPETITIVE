#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    long long int v[200010];
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(v+1,v+n+1);
    for(int i=2;i<=n;i++) v[i]+=v[i-1];
    long long int sum=INT_MIN;
    for(int i=0;i<=k;i++){
        sum=max(sum,(v[n-k+i]-v[2*i]));
    }
    cout<<sum<<endl;
    }
    return 0;
}