class Solution {
public:
    string convertToTitle(int cn) {
        string ans="";
        while(cn){
            cn--;
            ans+=(char)(cn%26+'A');
            cn/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};