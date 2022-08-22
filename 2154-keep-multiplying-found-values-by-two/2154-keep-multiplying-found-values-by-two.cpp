class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        int flag=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==original){
                    original*=2;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                return original;
        }
        return original;
    }
};