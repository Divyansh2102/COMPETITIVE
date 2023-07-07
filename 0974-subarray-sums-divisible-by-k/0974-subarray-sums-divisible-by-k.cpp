class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int sum=0;
        vector<int>rem(k,0);
        rem[0]=1;
        for(auto i:nums){
            sum+=i;
            int r=sum%k;
            r=r<0?r+k:r;
            ans+=rem[r];
            rem[r]+=1;
        }
        return ans;
    }
};