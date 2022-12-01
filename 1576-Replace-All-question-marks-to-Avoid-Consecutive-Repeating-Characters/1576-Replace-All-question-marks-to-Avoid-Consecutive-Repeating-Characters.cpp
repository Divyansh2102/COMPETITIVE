class Solution {
public:
    string modifyString(string s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                if(i==0){
                    if(i+1<n){
                        if(s[i+1]!='a') s[i]='a';
                        else if(s[i+1]!='b') s[i]='b';
                        else    s[i]='c';
                    }
                    else
                        s[i]='a';
                }
                else if(i==n-1){
                    if(s[i-1]!='a') s[i]='a';
                    else if(s[i-1]!='b') s[i]='b';
                    else s[i]='c';
                }
                else{
                    if(s[i-1]!='a' && s[i+1]!='a')  s[i]='a';
                    else if(s[i-1]!='b' && s[i+1]!='b')  s[i]='b';
                    else s[i]='c';
                }
            }
        }
        return s;
    }
};