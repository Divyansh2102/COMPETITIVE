class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            mp[i]=0;
        }
        for(auto x:nums)
            mp[x]++;
        vector<int>ans;
        for(auto x:mp){
            if(x.second>1){
                ans.push_back(x.first);
                break;
            }
        }
        for(auto x:mp){
            if(x.second==0){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};