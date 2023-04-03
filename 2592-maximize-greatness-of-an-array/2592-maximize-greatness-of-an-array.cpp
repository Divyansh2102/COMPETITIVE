class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=0,n=nums.size(),c=0;
        while(j<n){
            if(nums[j]>nums[i]){
                c+=1;
                i+=1,j+=1;
            }
            else j+=1;
        }
        return i;
    }
};