class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z') st+=s[i]+32;
            if(s[i]>='a' && s[i]<='z')  st+=s[i];
            if(s[i]>='0' && s[i]<='9') st+=s[i];
        }
        int i=0,j=st.size()-1;
        while(i<=j){
            if(st[i]!=st[j])    return 0;
            else    i+=1,j-=1;
        }
        return 1;
    }
};