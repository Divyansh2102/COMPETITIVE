class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>ans;
        stack<int>st;
        for(int i=t.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(i);
                ans.push_back(0);
            }
            else{
                while(st.size() && t[st.top()]<=t[i]) st.pop();
                if(st.empty()){
                    st.push(i);
                    ans.push_back(0);
                }
                else{
                    ans.push_back(st.top()-i);
                    st.push(i);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};