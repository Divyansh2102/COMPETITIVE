class Solution {
public:
    int sign(int x){
        if(x==0)    return 0;
        else if(x>0)    return 1;
        return -1;
    }
    int arraySign(vector<int>& nums) {
        int flag=1;
        for(int i=0;i<nums.size();i++){
            flag*=sign(nums[i]);
        }
        return flag;
    }
};
