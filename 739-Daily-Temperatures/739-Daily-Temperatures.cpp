class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>ans;
        stack<int>st;
        for(int i=t.size()-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(0);
                st.push(i);
            }
            else{
                while(!st.empty() && t[st.top()]<=t[i])
                    st.pop();
                if(st.empty()){
                    ans.push_back(0);
                    st.push(i);
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

