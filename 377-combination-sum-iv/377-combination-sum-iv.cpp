class Solution {
public:
    int solve(vector<int>&n,int t,vector<int>&dp){
        if(t<0)
            return 0;
        if(t==0)
            return 1;
        if(dp[t]!=-1)
            return dp[t];
        int ans=0;
        for(int i=0;i<n.size();i++)
            ans+=solve(n,t-n[i],dp);
        dp[t]=ans;
        return dp[t];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return solve(nums,target,dp);
    }
};