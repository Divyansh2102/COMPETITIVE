class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        cout<<n/2;
        vector<int>ans;
        for(int i=0;i<n/2;i++){
            int count=0;
            count=nums[2*i];
            while(count>0){
                ans.push_back(nums[(2*i)+1]);
                count--;
            }
        }
        return ans;
    }
};
