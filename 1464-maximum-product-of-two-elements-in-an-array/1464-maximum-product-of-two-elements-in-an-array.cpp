class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>2)
                pq.pop();
        }
        int x=pq.top();
        pq.pop();
        int y=pq.top();
        return (y-1)*(x-1);
    }
};