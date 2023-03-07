class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        int count=0;
        for(auto i:tasks){
            mp[i]++;
            count=max(mp[i],count);
        }
        int ans=(count-1)*(n+1);
        for(auto i:mp){
            if(i.second==count) ans+=1;
        }
        return max((int)tasks.size(),ans);
    }
};