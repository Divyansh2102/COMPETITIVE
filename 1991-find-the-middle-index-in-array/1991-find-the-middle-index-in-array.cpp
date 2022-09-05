class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int preSum=0;
        int sum=0;
        int ans;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(preSum==sum-nums[i]-preSum){
                ans=i;
                flag=true;
                break;
            }
            preSum+=nums[i];
        }
        if(flag==true){
            if(ans==0)
                return 0;
            else if(ans==nums.size()-1)
                return ans;
            else 
                return ans;
        }
        return -1;
    }
};