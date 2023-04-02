class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        vector<int>mp(1000001,-1);
        int ans=INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(mp[cards[i]]!=-1)
                ans=min(ans,i-mp[cards[i]]+1);
            mp[cards[i]]=i;
        }
        return ans==INT_MAX?-1:ans;
    }
};