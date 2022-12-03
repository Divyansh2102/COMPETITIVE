class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0,i=1;
        while(i<nums.size()){
            if(nums[i]==nums[i-1])
                i+=2,c++;
            else
                i++;
        }
        int temp=nums.size()-2*c;
        return {c,temp};
    }
};

// class Solution {
// public:
//     vector<int> numberOfPairs(vector<int>& nums) {
//         unordered_map<int,int>mp;
//         for(auto i:nums)
//             mp[i]++;
//         int c=0,nc=0;
//         for(auto i:mp){
//             c+=i.second/2;
//             nc+=i.second%2;
//         }
//         return {c,nc};
//     }
// };