#include<bits/stdc++.h>
using namespace std;
int solve(){
    string s="FBFFBFFBFBFFBFFBFBFFBFFB";
    int k;
    cin>>k;
    string temp;
    cin>>temp;
    int n=s.size();
    
    for(int i=0;i+k<n;i++){
        int flag=1;
        for(int j=0;j<k;j++){
            if(s[i+j]!=temp[j]){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}