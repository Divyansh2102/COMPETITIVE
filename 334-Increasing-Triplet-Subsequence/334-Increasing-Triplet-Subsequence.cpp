class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int i=INT_MAX,j=INT_MAX;
        int n=nums.size();
        for(int k=0;k<n;k++){
            if(j<nums[k])
                return 1;
            if(i<nums[k])
                j=min(j,nums[k]);
            i=min(i,nums[k]);
        }
        return 0;
    }
};