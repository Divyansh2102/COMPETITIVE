class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n=s.length();
        if(n<k) return s;
        stack<pair<char,int>>st;
        for(int i=0;i<n;i++){
            if(st.empty() || st.top().first!=s[i]){
                st.push({s[i],1});
            }
            else{
                    st.top().second+=1;
            }
            if(st.top().second>=k)  st.pop();
        }
        string ans="";
        while(st.size()){
            auto x=st.top();
            st.pop();
            while(x.second--)   ans+=x.first;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};