#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define s 1e6+2
int d(){
    return 1;
}
void solve(){
    ll x,y;
    cin>>x>>y;
    x=abs(x),y=abs(y);
    d();
    if(x==y)    cout<<x+y<<endl;
    else    cout<<2*max(x,y)-1<<endl;
}
int main()
{   
    d();
    ll t;
    cin>>t;
    while(t--)  solve();
    d();
    return 0;
}