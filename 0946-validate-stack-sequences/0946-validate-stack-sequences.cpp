class Solution {
public:
    bool validateStackSequences(vector<int>& p1, vector<int>& p2) {
        stack<int>st;
        int i=0;
        for(auto x:p1){
            st.push(x);
            while(st.size()>0 && st.top()==p2[i]){
                st.pop();
                i+=1;
            }
            
        }
        return st.empty();
    }
};