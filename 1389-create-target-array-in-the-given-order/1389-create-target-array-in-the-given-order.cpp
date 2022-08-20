class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target;
        for(int i = 0; i < n; i++){
            auto pos = target.begin();
            auto in = pos + index[i];
            target.insert (in, nums[i]);
        }
        return target;
    }
};