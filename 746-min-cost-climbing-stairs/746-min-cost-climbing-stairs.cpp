class Solution {
public:
    int minCostClimbingStairs(vector<int>& c) {
        c.push_back(0);
        for(int i=c.size()-3;i>-1;i--){
            c[i]+=min(c[i+1],c[i+2]);
        }
        return min(c[0],c[1]);
    }
};