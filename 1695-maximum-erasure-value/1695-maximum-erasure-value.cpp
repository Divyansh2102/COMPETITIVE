class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int cur_sum=0,res=0;
        unordered_set<int>st;
        int i=0,j=0;
        while(j<nums.size()){
            while(st.count(nums[j])>0){
                st.erase(nums[i]);
                cur_sum-=nums[i];
                i++;
            }
            cur_sum+=nums[j];
            st.insert(nums[j++]);
            res=max(res,cur_sum);
        }
        return res;
    }
};