class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        while(i<n && j<n){
            if(nums[i]==0){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    i+=1;
                }
                else    j+=1;
            }
            else i+=1,j+=1;
        }
        return;
    }
};