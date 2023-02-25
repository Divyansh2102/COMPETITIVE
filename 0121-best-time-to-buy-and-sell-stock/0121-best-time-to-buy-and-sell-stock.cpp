class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            buy=min(buy,prices[i]);
            ans=max(ans,prices[i]-buy);
        }
        return ans;
    }
};