class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        if(n==1)
            return;
        i=0,j=0;
        while(i<n && j<n){
            if(nums[i]==0){
                if(nums[j]!=0){
                    int t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                    i++;
                }
                else{
                    j++;
                }
            }
            else{
                i++,j++;
            }
        }
    }
};