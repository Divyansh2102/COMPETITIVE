class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                st.push_back(s[i]+32);
            }
            if(s[i]>='a' && s[i]<='z')
                st.push_back(s[i]);
            if(s[i]>='0' && s[i]<='9')
                st.push_back(s[i]);
        }
        string z=st;
        cout<<st<<" "<<z;
        reverse(z.begin(),z.end());
        if(z==st)
            return true;
        return false;
    }
};