#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>st;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>st;
        for(int i=0;i<=n-2;i++){
            string x=s.substr(i,2);
            st.insert(x);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}