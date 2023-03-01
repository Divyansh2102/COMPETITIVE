class Solution {
public:
    typedef pair<int,int> p;
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        if(k==nums.size())
            return nums;
        priority_queue<p,vector<p>,greater<p>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            if(pq.size()>k)
                pq.pop();
        }
        priority_queue<p,vector<p>,greater<p>>pq1;
        while(pq.size()){
            pq1.push({pq.top().second,pq.top().first});
            pq.pop();
        }
        vector<int>ans;
        while(pq1.size()){
            ans.push_back(pq1.top().second);
            pq1.pop();
        }
        return ans;
    }
};
