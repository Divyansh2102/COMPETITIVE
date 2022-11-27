class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector<unordered_map<long long,int>>mp(n);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int c=0;
                long long  diff= (long long)nums[i]-nums[j];
                if(mp[j].count(diff))
                    c=mp[j][diff];
                else
                    c=0;
                mp[i][diff]+=c+1;
                ans+=c;
            }
        }
        return ans;
    }
};
