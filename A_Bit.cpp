#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=0;
    while(t--){
        string temp;
        cin>>temp;
        for(auto i:temp){
            if(i=='+'){
                x+=1;
                break;
            }
            else if(i=='-'){
                x-=1;
                break;
            }   
        }
    }
    cout<<x<<endl;
    return 0;
}