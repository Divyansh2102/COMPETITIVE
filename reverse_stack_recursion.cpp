#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&st){
    if(st.empty())  return;
    int temp=st.top();
    st.pop();
    solve(st);
    cout<<temp;
}
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    solve(st);
    return 0;
}