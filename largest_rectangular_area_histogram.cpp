#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>histo;
    int n;
    cout<<"Enter the number of histograms  ";
    cin>>n;
    cout<<"\nEnter the heights  ";
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        histo.emplace_back(x);
    }    
    stack<long long>st;
    long long ans=0;
    int i=0,s=0;
    while(i<n){
        if(st.empty()|| histo[st.top()]<=histo[i])  st.push(i++);
        else{
            s=st.top();
            st.pop();
            ans=max(ans,histo[s]*(long long)(st.empty()?i:i-st.top()-1));
        }
    }
    while(st.size()){
        s=st.top();
        st.pop();
        ans=max(ans,(long long)histo[s]*(long long)(st.empty()?1:i-st.top()-1));
    }
    cout<<endl<<ans<<endl;
    return 0;
}