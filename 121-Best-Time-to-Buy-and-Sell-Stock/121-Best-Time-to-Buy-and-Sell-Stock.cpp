class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0,b=prices[0];
        if(n<2)
            return 0;
        for(int i=1;i<n;i++){
            int sell=prices[i]-b;
            if(sell<0)
                b=prices[i];
            ans=max(ans,sell);
        }
        return ans;
    }
};