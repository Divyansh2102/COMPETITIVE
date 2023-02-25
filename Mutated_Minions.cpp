#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%7==0)  c++;
        }
        cout<<c<<endl;
    }
    return 0;
}