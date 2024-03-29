class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){ 
                st.push(s[i]);
                continue;
            }
            if(st.empty())  return false;
            switch(s[i]){
                case ')':  
                        if(st.top()=='(')  st.pop();
                        else return false;
                        break;
                case ']':
                        if(st.top()=='[')  st.pop();
                        else return false;
                        break;
                case '}':
                        if(st.top()=='{')  st.pop();
                        else return false;
                        break;
            }
        }
        return st.empty();
    }
};