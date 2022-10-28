class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        int n=s.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string t=s[i];
            sort(s[i].begin(),s[i].end());
            mp[s[i]].push_back(t);
        }
        vector<vector<string>>ans;
        for(auto i=mp.begin();i!=mp.end();i++)
            ans.push_back(i->second);
        return ans;
    }
};