class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)    mp[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>>pq;
        for(auto i:mp)  pq.push({i.second,i.first});
        if(pq.top().first>1)    return true;
        return false;
    }
};