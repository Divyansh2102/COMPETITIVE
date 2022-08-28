class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(auto i:deck)
            mp[i]++;
        int pre=-1;
        for(auto i:mp){
            if(pre==-1)
                pre=i.second;
            pre=gcd(pre,i.second);
        }
        if(pre<2)
            return false;
        return true;
    }
};