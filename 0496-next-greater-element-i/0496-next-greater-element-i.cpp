class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int x=nums1[i],j=0;
            while(j<nums2.size()){
                if(nums2[j]==x)    break;
                j+=1;
            }
            j+=1;
            int flag=0;
            while(j<nums2.size()){
                    if(nums2[j]>x){ans.emplace_back(nums2[j]);flag=1;break;}
                    j+=1;
                }
            if(j>=nums2.size()-1 && flag==0)   ans.emplace_back(-1);
        }
        return ans;
    }
};