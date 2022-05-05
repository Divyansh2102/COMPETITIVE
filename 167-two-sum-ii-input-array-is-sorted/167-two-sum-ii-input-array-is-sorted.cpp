class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        if(nums.size()==2)  
            return {1,2};
        int i=0,j=nums.size()-1;
        while(i<=j) {
            if(nums[i]+nums[j]==target)
                return {i+1,j+1};      
            while(nums[i]+nums[j]>target)
                j--;
            while(nums[i]+nums[j]<target)
                 i++;
        }
        return {};
    }
};
