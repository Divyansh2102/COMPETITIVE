#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y+z)>1)
            c++;
    }
    cout<<c<<endl;
    return 0;
}