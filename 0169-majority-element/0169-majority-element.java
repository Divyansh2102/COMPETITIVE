class Solution {
    private int solve(int[] nums,int n){
        int cur=-1,cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cur=nums[i];
                cnt=1;
            }
            else{
                if(nums[i]==cur)    cnt+=1;
                else    cnt-=1;
            }
        }
        cnt=0;
        for(int i=0;i<n;i++){
            if(cur==nums[i])    cnt+=1;
        }
        if(cnt>n/2) return cur;
        return -1;
    }
    public int majorityElement(int[] nums) {
        int ans=solve(nums,nums.length);
        return ans;
    }
}