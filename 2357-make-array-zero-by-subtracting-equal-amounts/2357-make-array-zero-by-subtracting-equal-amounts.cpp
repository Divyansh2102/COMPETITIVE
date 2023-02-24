class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
                st.insert(nums[i]);
        }
        return st.size();
    }
};
// class Solution {
// public:
//     int c=0;
//     int flag=0;
//     int getmin(vector<int>& nums,int n){
//         int m=INT_MAX;
//         for(int i=0;i<n;i++){
//             if(m>nums[i] && nums[i]!=0){
//                 flag=1;
//                 m=nums[i];
//             }
//             else if(nums[i]!=0 && m<nums[i])
//                 flag=0;
//         }
//         return m;
//     }
//     void minumMin(vector<int>& nums,int mini,int n){
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0){
//                 nums[i]-=mini;
//             }
//         }
//         if(flag)    c+=1;
//     }
//     int minimumOperations(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int mini=getmin(nums,n);
//             minumMin(nums,mini,n);
//         }
//         return c;
//     }
// };
