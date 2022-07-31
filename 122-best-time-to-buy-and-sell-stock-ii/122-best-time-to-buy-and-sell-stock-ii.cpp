class Solution {
public:
    int maxProfit(vector<int>& p) {
        int maxprofit=0,minprice=p[0],mp=0;   
        for(int i=0;i<p.size();i++){
            minprice=min(minprice,p[i]);
            int profit=p[i]-minprice;
            if(profit>0){
                maxprofit=max(maxprofit,profit);
                minprice=p[i];
                mp+=maxprofit;
            }
            maxprofit=0;
        }
        return mp;
    }
};