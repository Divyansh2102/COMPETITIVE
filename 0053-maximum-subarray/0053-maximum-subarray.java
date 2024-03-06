class Solution {
    public int maxSubArray(int[] nums) {
        int ans=nums[0];
        int csum=0;
        for(int n:nums){
            csum=Math.max(csum,0);
            csum+=n;
            ans=Math.max(csum,ans);
        }
        return ans;
    }
}