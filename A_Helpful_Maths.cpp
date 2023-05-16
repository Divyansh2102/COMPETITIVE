#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c1,c2,c3;
    c1=c2=c3=0;
    for(auto &i:s){
        if(i=='1')  c1+=1;
        else if(i=='2') c2+=1;
        else if(i=='3')c3+=1;
    }
    s="";
    while(c1--){
        s+="1+";
    }
    while(c2--){
        s+="2+";
    }
    while(c3--){
        s+="3+";
    }
    s.pop_back();
    cout<<s<<endl;
    return 0;
}