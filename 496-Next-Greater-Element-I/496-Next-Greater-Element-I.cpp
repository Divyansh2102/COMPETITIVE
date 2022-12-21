class Solution {
public:
    int findd(vector<int>&num,int x){
        int i=0;
        for(i=0;i<num.size();i++){
            if(num[i]==x)
                break;
        }
        if(i==num.size()||i==num.size()-1)
            return -1;
            for(;i<num.size();i++)
                if(num[i]>x)
                    return num[i];
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),0);
        for(int i=0;i<nums1.size();i++){
            ans[i]=findd(nums2,nums1[i]);
        }
        return ans;
    }
};
