class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=m,n2=n;
        vector<int>a;
        int i=0,j=0;
        while(i<n1&& j<n2){
            if(nums1[i]<=nums2[j]){
                a.push_back(nums1[i]);
                i++;
            }
            else{
                a.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n1){
            a.push_back(nums1[i]);
            i++;
        }
        while(j<n2){
            a.push_back(nums2[j]);
            j++;
        }
        for(int i=0;i<m+n;i++)
            nums1[i]=a[i];
    }
};