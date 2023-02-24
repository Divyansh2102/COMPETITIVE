#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>w(n);
        for(int i=0;i<n;i++)
            cin>>w[i];
        int mini=*min_element(w.begin(),w.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(w[i]!=mini)  count+=w[i]-mini;
        }
        cout<<count<<endl;
    }
}