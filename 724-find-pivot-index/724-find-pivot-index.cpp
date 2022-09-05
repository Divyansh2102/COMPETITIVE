class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        int preSum=0;
        for(int i=0;i<n;i++){
            if(preSum==(sum-nums[i]-preSum))
                return i;
            preSum+=nums[i];
        }
        return -1;
    }
};