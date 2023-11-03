class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        if(nums.size()<3)   return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || i<nums.size() && nums[i]!=nums[i-1]){
                int l=i+1;
                int r=nums.size()-1;
                int sum=0-nums[i];
                while(l<r){
                    if(nums[l]+nums[r]==sum){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        ans.push_back(temp);
                        while(l<r && nums[l]==temp[1])  l+=1;
                        while(l<r && nums[r]==temp[1])  r-=1;
                        temp.clear();
                    }
                    else if(nums[l]+nums[r]<sum)    l+=1;
                    else    r-=1;
                }
            }
        }
        return ans;
    }
};