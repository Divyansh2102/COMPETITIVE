class Solution {
public:
    vector<int> findOriginalArray(vector<int>& ch) {
        if(ch.size()%2!=0)
            return {};
        vector<int>ans(ch.size()/2,0);
        vector<int>mp(100001,0);
        for(auto x:ch)
            mp[x]++;
        int id=0;
        for(int i=0;i<100001;i++){
            while(mp[i]>0 && i*2<100001 && mp[i*2]>0){
                mp[i]--;
                mp[i*2]--;
                ans[id]=i;
                id++;
            }
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]!=0)
                return {};
        }
        return ans;
    }
};