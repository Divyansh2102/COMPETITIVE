class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        // vector<int>ans(nums.size(),0);
        // if(nums.size()==0)
        //     return {};
        // for(int i=0;i<nums.size();i++){
        //     nums[q[i][1]]+=q[i][0];
        //     int sum=0;
        //     for(int i=0;i<nums.size();i++){
        //         if(nums[i]%2==0)
        //             sum+=nums[i];
        //     }
        //     ans[i]=sum;
        // }
        // return ans;
        vector<int>ans;
        int sum=0;
        for(auto x:nums){
            if(x%2==0)
                sum+=x;
        }
        for(auto x:q){
            int index=x[1];
            int val=x[0];
            if(nums[index]%2==0){
                sum-=nums[index];
            }
            nums[index]+=val;
            if(nums[index]%2==0)
                sum+=nums[index];
            ans.push_back(sum);
        }
        return ans;
    }
};