#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s.length()<=10)   cout<<s<<endl;
        else{
            string temp="";
            temp+=s[0];
            int c=0;
            for(int i=1;i<s.length()-1;i++) c+=1;
            temp+=to_string(c);
            temp+=s[s.length()-1];
            cout<<temp<<endl;
        }
    }
    return 0;
}