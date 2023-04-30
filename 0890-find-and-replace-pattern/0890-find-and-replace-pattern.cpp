class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& word, string pattern) {
        vector<string>st;
        for(int i=0;i<word.size();i++){
            string s=word[i];
            if(s.length()!=pattern.length()) continue;
            unordered_map<char,char>m1,m2;
            int flag=1;
            for(int j=0;j<s.length();j++){
                if((m1.find(pattern[j])==m1.end())  && (m2.find(s[j])==m2.end())){
                    m1[pattern[j]]=s[j];
                    m2[s[j]]=pattern[j];
                }
                else{
                    if(m1[pattern[j]]!=s[j] || m2[s[j]]!=pattern[j]){
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1) st.push_back(s);
        }
        return st;
    }
};