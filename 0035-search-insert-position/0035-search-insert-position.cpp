class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1,mid,pos;
        if(n<1)  return 0;
        while(low<=high){
            mid=low+(high-low)/2;
            pos=mid;
            if(nums[mid]==target)   return mid;
            else if(nums[mid]>target){
                high=mid-1;
                pos=mid;
            }
            else{
                low=mid+1;
                pos=mid+1;
            }
        }
        return pos;
    }
};