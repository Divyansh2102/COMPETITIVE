class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> t1,t2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(t1.size())   t1.pop();
            }
            else    t1.push(s[i]);
        }
        
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                if(t2.size())   t2.pop();
            }
            else    t2.push(t[i]);
        }
        string s1="",s2="";
        while(t1.size()){
            s1+=t1.top();
            t1.pop();
        }
        while(t2.size()){
            s2+=t2.top();
            t2.pop();
        }
        // cout<<s1<<endl<<s2<<endl;
        return s1==s2;
    }
};