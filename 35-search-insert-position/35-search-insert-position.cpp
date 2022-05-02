class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid=0;
        while(l<=r){
            mid=(l+r)/2;
            if(target==nums[mid])
                break;
            if(l==r && target>nums[mid]){
                mid++;
                break;
            }
            else if(target>nums[mid])
                l=mid+1;
            else
                r=mid-1;
        }
        return mid;
    }
};