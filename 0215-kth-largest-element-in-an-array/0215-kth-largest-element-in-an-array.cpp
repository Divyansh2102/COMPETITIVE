class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq(nums.begin(),nums.end());
        int ans,i=0;
        while(i<k){
            ans=pq.top();
            pq.pop();
            i++;
        }
        return ans;
    }
};