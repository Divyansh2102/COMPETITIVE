class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        int n=p.size();
        vector<pair<int,int>>pr;
        for(int i=0;i<n;i++)
            pr.push_back({c[i],p[i]});
        sort(pr.begin(),pr.end());
        priority_queue<int>pq;
        int j=0;
        for(int i=0;i<k;i++){
            while(j<n && pr[j].first<=w){
                pq.push(pr[j++].second);
            }
            if(pq.empty())
                break;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};