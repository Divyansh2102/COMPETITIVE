class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0)
            return 0;
        unordered_map<int,int>mp;
        for(auto x:nums)
            mp[x]++;
        int c=0;
        for(auto x:mp){
            if(k==0){
                if(x.second>1)
                    c++;
            }
            else{
                if(mp.count(x.first-k))
                    c++;
            }
        }
        return c;
    }
};