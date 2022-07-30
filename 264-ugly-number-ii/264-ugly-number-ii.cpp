class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n,0);
        dp[0]=1;
        int ia=0,ib=0,ic=0;
        int nexta,nextb,nextc,mini=0;
        for(int i=1;i<n;i++){
            nexta=dp[ia]*2;
            nextb=dp[ib]*3;
            nextc=dp[ic]*5;
            mini=min(nexta,min(nextb,nextc));
            if(mini==nexta)ia++;
            if(mini==nextb)ib++;
            if(mini==nextc)ic++;
            dp[i]=mini;
        }
        return dp[n-1];
    }
};