class Solution {
public:
    string reverseWords(string s) {
        stack<string>st; 
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' &&  temp=="")   continue;
            else if(s[i]==' ' && temp!="")  {st.push(temp);temp="";}
            else if(s[i]!=' ')  temp+=s[i];
        }
        if(temp!="")    st.push(temp);
        temp="";
        while(st.size()>1){
            temp+=st.top()+" ";
            st.pop();
        }
        temp+=st.top();
        return temp;
    }
};