class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second)
            return a.first>b.first;
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        vector<pair<int,int>>v;
        for(auto i:mp)
            v.push_back(i);
        sort(v.begin(),v.end(),cmp);
        nums.clear();
        for(auto i:v){
            while(i.second--)
                nums.push_back(i.first);
        }
        return nums;
    }
};