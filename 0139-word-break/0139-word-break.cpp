class Solution {
public:
    int dp[301];
    int ans(int i,string s,unordered_set<string>&st){
        if(i==s.size()) return 1;
        string temp="";
        if(dp[i]!=-1)   return dp[i];
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(st.find(temp)!=st.end()){
                if(ans(j+1,s,st))   return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s, vector<string>& wD) {
        unordered_set<string>st;
        memset(dp,-1,sizeof dp);
        for(auto &i:wD) st.insert(i);
        return ans(0,s,st);
    }
};