#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define s 1e6+2
int d(){
    return 1;
}
void solve(){
    d();
    ll n,k,d,w;
    cin>>n>>k>>d>>w;
    ll p=0,ep=1,ans=0;
    for(ll i=0;i<n;i++){
        ll t;
        cin>>t;
        if(p==0 || ep<=t){
            ans+=1;
            p=k-1;
            ep=t+w+d+1;
        }
        else    p--;
    }
    cout<<ans<<endl;
}
int main()
{
    ll t;
    d();
    cin>>t;
    d();
    while(t--)  solve();
    d();
    return 0;
}