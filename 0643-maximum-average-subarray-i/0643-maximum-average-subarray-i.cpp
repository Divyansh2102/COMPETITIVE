class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double ans=0;
        for(int i=0;i<k;i++)       ans+=nums[i];
        double res=ans;
        for(int i=k;i<n;i++){
            ans+=nums[i]-nums[i-k];
            res=max(ans,res);
        }
        return res/k;
    }
};