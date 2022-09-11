class Solution {
public:
    int maxPerformance(int n, vector<int>& sp, vector<int>& ef, int k) {
        vector<pair<int,int>>v;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<sp.size();i++){
            v.push_back({ef[i],sp[i]});
        }
        sort(v.begin(),v.end());
        long sum=0,ans=0;
        for(int i=v.size()-1;i>=0;i--){
            sum+=v[i].second;
            pq.push(v[i].second);
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,sum*v[i].first);
        }
        ans%=1000000007;
        return ans;
    }
};