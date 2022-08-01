class Solution {
public:
    vector<int> intersection(vector<vector<int>>& n) {
        int r=n.size();
        vector<int>vec;
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<r;i++)
            for(int j=0;j<n[i].size();j++)
                vec.push_back(n[i][j]);
        for(int i=0;i<vec.size();i++)
            mp[vec[i]]++;
        for(auto i:mp){
            if(i.second==r)
                ans.push_back(i.first);
        }
        return ans;
    }
};