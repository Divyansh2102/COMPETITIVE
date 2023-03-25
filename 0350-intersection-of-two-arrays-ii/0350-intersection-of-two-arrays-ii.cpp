class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1,m2;
        for(auto i:nums1)   m1[i]++;
        for(auto i:nums2)   m2[i]++;
        vector<int>ans;
        for(auto i:m1){
            if(m2[i.first]){
                int cnt=min(i.second,m2[i.first]);
                while(cnt--)    ans.push_back(i.first);
            }
        }
        return ans;
    }
};