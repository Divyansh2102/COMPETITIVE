class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto i:nums)
            mp[i]++;
        int n=nums.size()/3;
        for(auto i:mp){
            if(i.second>n)
                ans.push_back(i.first);
        }
        return ans;
    }
};