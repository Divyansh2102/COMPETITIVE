class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        priority_queue<pair<int,int>>pq;
        if(n==0)    return {};
        for(int i=0;i<n;i++){
            pq.push({abs(x-arr[i]),arr[i]});
        }
        while(pq.size()!=k)
            pq.pop();
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
