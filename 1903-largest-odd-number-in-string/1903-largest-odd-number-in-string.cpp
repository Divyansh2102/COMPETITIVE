class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        for(int i=num.length();i>=0;i--){
            int k=num[i]-'0';
            if(k%2!=0){
                ans=num.substr(0,i+1);
                return ans;
            }
        }
        return ans;
    }
};