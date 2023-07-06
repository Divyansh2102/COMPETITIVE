class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int i=0,j=0,n=nums.size();
        int sum=0;
        while(j<n && i<=j){
            if(i==0 && j==0 && nums[i]>=target) return 1;
            sum+=nums[j];
            if(sum>=target){
                ans=min(ans,j-i+1);
                sum-=nums[i++];
                if(sum<target)  j+=1;
                else    sum-=nums[j];
            }
            else{
                j+=1;
            }
        }
        return ans!=INT_MAX?ans:0;
    }
};