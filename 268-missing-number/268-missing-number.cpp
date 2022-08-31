class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()-1;
        int t,N=n+1;
        t=(N)*(N+1)/2;
        for(int i=0;i<=n;i++)
            t-=nums[i];
        return t;
    }
};