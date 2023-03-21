class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long nsum=0,ans=0;
        for(auto i:nums){
            if(i==0)    nsum+=1;
            else    nsum=0;
            ans+=nsum;
        }
        return ans;
    }
};