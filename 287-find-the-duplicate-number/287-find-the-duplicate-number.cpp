class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int ma=v[v.size()-1];
        vector<int>a(ma+1,0);
        for(int i=0;i<n;i++)
            a[nums[i]]++;
        int m=-1;
        for(int i=0;i<ma+1;i++){
            if(a[i]>m)
                m=i;
        }
        return m;
    }
};