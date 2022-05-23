class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        vector<int>z;
        sort(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i++)
      {
          for(int j=i+1;j<nums.size()-1;j++)
          {
              int l=j+1,h=nums.size()-1;
              while(l<h)
              {
                  long long s=(long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[h];
                  if(s==target)
                  {
                      z.push_back(nums[i]);
                      z.push_back(nums[j]);
                      z.push_back(nums[l]);
                      z.push_back(nums[h]);
                      v.push_back(z);
                      z.clear();
                  }
                  if(s<target)
                      l++;
                  else
                      h--;
              }
          }
      }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
};