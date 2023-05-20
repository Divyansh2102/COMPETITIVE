class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f=INT_MAX,s=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(s<nums[i])   return 1;
            if(f<nums[i])   s=min(s,nums[i]);
            f=min(f,nums[i]);
        }
        return 0;
    }
};