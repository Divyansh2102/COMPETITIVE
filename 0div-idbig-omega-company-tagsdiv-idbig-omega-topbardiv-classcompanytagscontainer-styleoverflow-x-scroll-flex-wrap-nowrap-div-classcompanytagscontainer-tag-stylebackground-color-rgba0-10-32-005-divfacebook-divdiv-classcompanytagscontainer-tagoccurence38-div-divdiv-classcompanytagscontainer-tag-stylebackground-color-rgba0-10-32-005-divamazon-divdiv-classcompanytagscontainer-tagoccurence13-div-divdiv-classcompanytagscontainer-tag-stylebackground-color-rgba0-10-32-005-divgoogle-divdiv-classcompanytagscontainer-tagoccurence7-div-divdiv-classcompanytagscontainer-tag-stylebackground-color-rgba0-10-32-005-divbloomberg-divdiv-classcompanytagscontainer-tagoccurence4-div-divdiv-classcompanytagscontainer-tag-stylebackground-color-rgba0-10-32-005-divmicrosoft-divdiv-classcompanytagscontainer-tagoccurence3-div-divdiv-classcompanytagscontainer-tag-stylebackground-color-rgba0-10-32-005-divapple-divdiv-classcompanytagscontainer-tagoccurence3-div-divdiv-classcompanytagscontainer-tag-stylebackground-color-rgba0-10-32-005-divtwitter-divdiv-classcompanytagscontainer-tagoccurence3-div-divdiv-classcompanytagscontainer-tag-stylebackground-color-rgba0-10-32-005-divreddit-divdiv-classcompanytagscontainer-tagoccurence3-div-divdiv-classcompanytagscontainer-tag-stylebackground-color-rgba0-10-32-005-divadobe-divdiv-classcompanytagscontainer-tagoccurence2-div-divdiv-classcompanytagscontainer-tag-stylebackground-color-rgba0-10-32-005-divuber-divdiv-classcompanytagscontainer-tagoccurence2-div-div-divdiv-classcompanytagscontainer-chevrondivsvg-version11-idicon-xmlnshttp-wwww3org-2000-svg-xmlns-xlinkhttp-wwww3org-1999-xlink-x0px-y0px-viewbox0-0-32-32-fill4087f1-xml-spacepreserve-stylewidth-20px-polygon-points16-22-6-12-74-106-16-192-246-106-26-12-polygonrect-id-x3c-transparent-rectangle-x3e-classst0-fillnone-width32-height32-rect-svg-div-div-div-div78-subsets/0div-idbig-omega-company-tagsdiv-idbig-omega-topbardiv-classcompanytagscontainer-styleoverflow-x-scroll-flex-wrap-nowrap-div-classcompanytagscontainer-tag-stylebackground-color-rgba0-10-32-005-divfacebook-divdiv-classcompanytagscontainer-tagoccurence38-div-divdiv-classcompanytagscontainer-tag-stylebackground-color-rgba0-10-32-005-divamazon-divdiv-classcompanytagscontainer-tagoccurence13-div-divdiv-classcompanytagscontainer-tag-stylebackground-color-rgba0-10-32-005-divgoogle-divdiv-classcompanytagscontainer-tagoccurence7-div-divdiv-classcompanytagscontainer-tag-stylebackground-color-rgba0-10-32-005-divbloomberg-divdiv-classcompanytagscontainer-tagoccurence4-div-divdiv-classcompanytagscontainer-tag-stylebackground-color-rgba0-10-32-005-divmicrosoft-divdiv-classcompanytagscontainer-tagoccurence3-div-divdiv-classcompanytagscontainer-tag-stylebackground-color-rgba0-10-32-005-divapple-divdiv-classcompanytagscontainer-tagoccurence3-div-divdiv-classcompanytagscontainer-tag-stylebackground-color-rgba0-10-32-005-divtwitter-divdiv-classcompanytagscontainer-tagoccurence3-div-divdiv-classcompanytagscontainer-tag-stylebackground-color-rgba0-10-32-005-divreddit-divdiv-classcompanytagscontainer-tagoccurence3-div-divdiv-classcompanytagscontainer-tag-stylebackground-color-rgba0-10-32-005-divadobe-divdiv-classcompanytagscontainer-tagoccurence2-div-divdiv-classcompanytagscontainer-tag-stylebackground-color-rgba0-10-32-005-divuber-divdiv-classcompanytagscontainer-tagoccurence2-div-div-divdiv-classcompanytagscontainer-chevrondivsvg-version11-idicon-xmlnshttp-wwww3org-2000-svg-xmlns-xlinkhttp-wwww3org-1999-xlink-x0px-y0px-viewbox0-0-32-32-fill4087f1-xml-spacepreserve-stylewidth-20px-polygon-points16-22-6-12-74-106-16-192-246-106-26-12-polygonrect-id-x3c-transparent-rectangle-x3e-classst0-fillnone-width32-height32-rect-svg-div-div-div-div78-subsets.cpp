class Solution {
public:
    void subset(vector<int>&nums,vector<int>&sub,vector<vector<int>>&ans,int idx){
        ans.push_back(sub);
        for(int i=idx;i<nums.size();i++){
            sub.push_back(nums[i]);
            subset(nums,sub,ans,i+1);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        vector<vector<int>>ans;
        int idx=0;
        subset(nums,sub,ans,idx);
        return ans;
    }
};