#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<vector<int>>v(5,vector<int>(5,0));
    int x;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>x;
            if(x==1){
                cout<< abs(2-i)+abs(2-j)<<endl;
                break;
            } 
        }
    } 
    return 0;
}