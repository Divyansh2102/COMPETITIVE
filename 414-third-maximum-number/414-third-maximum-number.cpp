class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
        int max1,max2,max3;
        max1=max2=max3=nums[0];
        if(nums.size()==2){
            if(nums[1]>max3)
                max3=nums[1];
        }
        else{
            for(int i=1;i<nums.size();i++){
            if(nums[i]>max1){
                max3=max2;
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2){
                max3=max2;
                max2=nums[i];
            }
            else if(nums[i]>max3)
                max3=nums[i];
            }
        }
        return max3;
    }
};