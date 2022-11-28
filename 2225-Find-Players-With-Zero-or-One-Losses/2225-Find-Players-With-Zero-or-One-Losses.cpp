class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;
        int n=matches.size();
        for(int i=0;i<n;i++){
            mp[matches[i][1]]++;
        }

        vector<vector<int>>v;
        set<int>st;

        for(int i=0;i<n;i++){
            if(mp.find(matches[i][0])==mp.end())
                st.insert(matches[i][0]);
        }
        vector<int>o(st.begin(),st.end());
        v.push_back(o);
        st.clear();
        o.clear();
        for(auto i:mp){
            if(i.second==1){
                st.insert(i.first);
            }
        }
        vector<int>t(st.begin(),st.end());
        v.push_back(t);
        return v;
    }
};