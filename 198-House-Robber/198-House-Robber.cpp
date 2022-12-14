//using extra array

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<1)
            return 0;
        if(n==1)
            return nums[0];
        vector<int>ans(n,0);
        ans[0]=nums[0],ans[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            ans[i]=max(nums[i]+ans[i-2],ans[i-1]);
        }
        return ans[n-1];
    }
};

/*
//Without using an extra array

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<1)
            return 0;
        if(n==1)
            return nums[0];
        nums[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            nums[i]=max(nums[i]+nums[i-2],nums[i-1]);
        }
        return nums[n-1];
    }
};
*/