/*
Using Binary Search:- TC=O(logN)
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l,h,n;
        n=nums.size();
        l=0,h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<=nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(target>=nums[mid] && nums[h]>=target)
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        return -1;
    }
};


/*
Using Linear Search:- TC=O(N)


class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                return i;
        }
        return -1;
    }
};
*/