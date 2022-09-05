class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int ans[nums.size()+1];
        for(int i=0;i<nums.size()+1;i++)
            ans[i]=0;
        for(int i=0;i<nums.size();i++)
            ans[nums[i]]++;
        vector<int>v;
        for(int i=1;i<nums.size()+1;i++){
            if(ans[i]==0)
                v.push_back(i);
        }
        return v;
    }
};