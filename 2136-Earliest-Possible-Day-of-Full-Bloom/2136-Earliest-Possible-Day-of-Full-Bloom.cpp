class Solution {
public:
    static bool comp(pair<int,int>p1,pair<int,int>p2){
        return p1.second>p2.second;
    }
    int earliestFullBloom(vector<int>& pt, vector<int>& gt) {
        int n=pt.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
            v.push_back({pt[i],gt[i]});
        sort(v.begin(),v.end(),comp);
        int st=0;
        int ans=0;
        for(int i=0;i<n;i++){
            st+=v[i].first;
            ans=max(ans,st+v[i].second);
        }
        return ans;
    }
};