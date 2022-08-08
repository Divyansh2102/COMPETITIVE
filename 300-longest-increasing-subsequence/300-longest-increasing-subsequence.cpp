class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        vector<int>dp(n,1);
        if(n==1)
            return 1;
        int ans=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};