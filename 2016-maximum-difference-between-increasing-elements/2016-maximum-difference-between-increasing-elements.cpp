class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini=nums[0],ans=-1;
        for(int i=0;i<nums.size();i++){
            if(mini<nums[i])    ans=max(ans,nums[i]-mini);
            else    mini=nums[i];
        }
        return ans;
    }
};