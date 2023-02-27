#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string>Old;
        for(int i=0;i<n;i++){
            string x;
            cin>>x;
            Old.push_back(x);
        }
        vector<string>New;
        for(int i=0;i<k;i++){
            int l;
            cin>>l;
            for(int j=0;j<l;j++){
                string temp;
                cin>>temp;
                New.push_back(temp);
            }
        }
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<New.size();j++){
                if(Old[i]==New[j]){
                    flag=1;
                    break;
                }
            }
            if(flag)    cout<<"YES ";
            else    cout<<"NO ";
        }
        cout<<endl;
    }
    return 0;
}