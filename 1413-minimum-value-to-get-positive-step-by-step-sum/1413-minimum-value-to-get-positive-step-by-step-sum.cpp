class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0,mins=0;
        for(auto i:nums){
            sum+=i;
            mins=min(mins,sum);
        }
        return 1-mins;
    }
};