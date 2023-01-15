class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c=1,m=0;
        int n=nums.size();
        if(n==0)
            return 0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1)
                c++;
            else if(nums[i]!=nums[i-1]){
                m=max(m,c);
                c=1;
            }
        }
        return max(m,c);
    }
};