class Solution {
public:
    string reverseWords(string s) {
        vector<string>st;
        string temp="";
        int i=0;
        while(i<s.size()){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else if(s[i]==' ' && temp!=""){
                st.push_back(temp);
                temp="";
            }
            i++;
        }
        if(temp!="")
            st.push_back(temp);
        reverse(st.begin(),st.end());
        temp="";
        for(i=0;i<st.size();i++){
            temp+=st[i];
            if((st.size()-i)!=1)
                temp+=" ";
        }
        return temp;
    }
};