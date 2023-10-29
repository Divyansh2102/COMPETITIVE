class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                count+=1;
                nums[i]=101;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]>nums[j])
                    swap(nums[i],nums[j]);
            }
        }
        return n-count;
    }
};