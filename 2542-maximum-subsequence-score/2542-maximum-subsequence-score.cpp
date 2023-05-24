class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>vec;
        for(int i=0;i<nums1.size();i++){
            vec.push_back({nums2[i],nums1[i]});
        }
        sort(vec.rbegin(),vec.rend());
        long long  csum=0;
        long long ans=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k-1;i++){
            csum+=vec[i].second;
            pq.push(vec[i].second);
        }
        for(int i=k-1;i<nums1.size();i++){
            csum+=vec[i].second;
            pq.push(vec[i].second);
            ans=max(ans,csum*vec[i].first);
            csum-=pq.top();
            pq.pop();
        }
        return ans;
    }
};