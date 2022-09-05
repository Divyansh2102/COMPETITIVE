class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        vector<int>v;
        for(auto m:mp){
            if(m.second>1)
                v.push_back(m.first);
        }
        return v;
    }
};