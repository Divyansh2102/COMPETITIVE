class Solution {
public:
    int peak(vector<int>&num,int l,int h,int n){
        if(l>h) return 0;
        int mid=l+(h-l)/2;
        if((mid==0 || num[mid-1]<=num[mid]) && (mid==n-1 || num[mid+1]<=num[mid]))  return mid;
        if(mid>0 && num[mid-1]>num[mid])    return peak(num,l,mid-1,n);
        else    return peak(num,mid+1,h,n);
    }
    int findPeakElement(vector<int>& nums) {
        return peak(nums,0,nums.size()-1,nums.size());
    }
};