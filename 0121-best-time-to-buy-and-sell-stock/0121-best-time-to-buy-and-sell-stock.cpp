class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=prices[0];
        int ans=0;
        if(n<2) return 0;
        for(int i=1;i<n;i++){
            int sell=prices[i]-buy;
            if(sell<0)
                buy=prices[i];
            ans=max(sell,ans);
        }
        return ans;
    }
};