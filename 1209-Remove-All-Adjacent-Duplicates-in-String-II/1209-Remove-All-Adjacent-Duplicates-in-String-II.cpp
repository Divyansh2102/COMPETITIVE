class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        if(k>n)
            return s;
        stack<int>st;
        vector<int>cfreq(n,1);
        string ans="";
        st.push(0);
        for(int i=1;i<n;i++){
            if(!st.empty()){
                if(s[st.top()]==s[i]){
                    cfreq[i]=cfreq[st.top()]+1;
                }
            }
            st.push(i);
            if(cfreq[st.top()]==k){
                for(int i=0;i<k;i++)
                    st.pop();
            }
        }
        while(st.size()){
            ans.push_back(s[st.top()]);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};