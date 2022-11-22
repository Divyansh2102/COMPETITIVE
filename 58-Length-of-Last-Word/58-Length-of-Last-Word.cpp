class Solution {
public:
    int lengthOfLastWord(string s) {
        string ans="";
        int flag=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && flag==1)
                return ans.length();
            if(s[i]!=' '){
                ans+=s[i];
                flag=1;
            }
        }
        return ans.length();
    }
};