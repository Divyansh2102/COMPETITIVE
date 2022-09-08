class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i])
                c++;
        }   
        if(nums[0]<nums[n-1])
            c++;
        if(c<=1)
            return 1;
        return 0;
    }
};