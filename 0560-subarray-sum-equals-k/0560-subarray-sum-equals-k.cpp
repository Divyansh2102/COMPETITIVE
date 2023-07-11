class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>preSum;
        preSum.push_back(0);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            preSum.push_back(sum);
        }
        map<int,int>mp;
        int ans=0;
        for(auto i:preSum){
            if(mp[i-k]) ans+=mp[i-k];
            mp[i]+=1;
        }
        return ans;
    }
};