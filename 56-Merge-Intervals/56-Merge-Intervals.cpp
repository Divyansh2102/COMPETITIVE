class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>res;
        int n=v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(res.size()==0||v[i][0]>res.back()[1])
                res.push_back(v[i]);
            else
                res.back()[1]=max(res.back()[1],v[i][1]);
        }
        return res;
    }
};