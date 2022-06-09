class Solution {
public:
    int findPeek(vector<int>&nums,int l,int h,int n){
        if(l>h)
            return 0;
        int mid=l+(h-l)/2;
        if((mid==0|| nums[mid-1]<=nums[mid])&&(mid==n-1 || nums[mid+1]<=nums[mid]))
            return mid;
        else if(mid>0 && nums[mid-1]>nums[mid])
            return findPeek(nums,l,mid-1,n);
        else
            return findPeek(nums,mid+1,h,n);
    }
    int findPeakElement(vector<int>& nums) {
        return findPeek(nums,0,nums.size()-1,nums.size());
    }
};