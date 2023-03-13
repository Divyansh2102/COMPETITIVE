class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0)
                nums[i]=0;
        }
        for(int i=0;i<n;i++){
            int in=abs(nums[i]);
            if(in>=1 && in<=n){
                if(nums[in-1]==0) nums[in-1]=-1*(n+1);
                else if(nums[in-1]>0) nums[in-1]*=-1;
            }
        }
        
        for(int i=1;i<=n;i++){
            if(nums[i-1]>=0) return i;
        }
        return n+1;
    }
};