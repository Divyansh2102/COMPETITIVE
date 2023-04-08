#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&st,int k){
    if(k==1){
        st.pop();
        return;
    }
    int temp=st.top();
    st.pop();
    solve(st,k-1);
    st.push(temp);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    solve(st,st.size()/2 +1 );
    while(st.size()){
        cout<<st.top();
        st.pop();
    }
    return 1;
}