class Solution {
public:
    int signFunc(int x){
        if(x>0)
            return 1;
        else if(x<0)
            return -1;
        return 0;
    }
    int arraySign(vector<int>& nums) {
        int flag=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
            flag*=signFunc(nums[i]);
        return flag;
    }
};