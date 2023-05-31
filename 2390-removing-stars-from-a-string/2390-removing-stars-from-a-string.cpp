class Solution {
public:
    string removeStars(string s) {
       stack<char>st;
       for(int i=0;i<s.length();i++){
           st.push(s[i]);
           if(st.top()=='*' && st.size()){
               st.pop();
               st.pop();
           }
       }
       s="";
       while(st.size()){
           s+=st.top();
           st.pop();
       }
        reverse(s.begin(),s.end());
        return s;
    }
};