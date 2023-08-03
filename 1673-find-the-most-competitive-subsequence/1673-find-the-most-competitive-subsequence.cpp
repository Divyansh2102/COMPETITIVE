class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>nums[i] && n-i+st.size()-1>=k) st.pop();
            if(st.size()<k) st.push(nums[i]);
            
        }
        vector<int>v;
        while(st.size()){
            v.emplace_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};