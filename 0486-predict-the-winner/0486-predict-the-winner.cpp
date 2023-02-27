class Solution {
public:
    int check(vector<int>&nums,int s,int e,vector<vector<int>>&dp){
        if(s>e) return 0;
        if(dp[s][e]!=-1)    return dp[s][e];
        int a=nums[s]-check(nums,s+1,e,dp);
        int b=nums[e]-check(nums,s,e-1,dp);
        return dp[s][e]=max(a,b);
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return check(nums,0,n-1,dp)>=0;
    }
};