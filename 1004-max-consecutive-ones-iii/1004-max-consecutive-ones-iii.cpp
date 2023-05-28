class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size(),z=0,ans=0;
        while(j<n){
            if(nums[j]==0)  z+=1;
            while(z>k){
                if(nums[i]==0)  z-=1;
                i+=1;
            }
            ans=max(ans,j-i+1);
            j+=1;
        }
        return ans;
    }
};