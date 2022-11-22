class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int c=0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='L')
                    c++;
                else
                    c--;
            }
            if(c==0)
                ans+=1;
        }
        return ans;
    }
};