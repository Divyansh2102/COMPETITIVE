class Solution {
public:
    vector<int>getfre(string s){
        vector<int>fre(26,0);
        for(int i=0;i<s.length();i++)
            fre[s[i]-'a']++;
        return fre;
    }
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        vector<string>ans;
        vector<int>max_fre(26,0);
        for(auto &x:w2){
            vector<int>freq=getfre(x);
            for(int i=0;i<26;i++)
                max_fre[i]=max(freq[i],max_fre[i]);
        }
        for(auto &x:w1){
            vector<int>fre=getfre(x);
            bool flag=true;
            for(int i=0;i<26;i++){
                if(fre[i]<max_fre[i]){
                    flag=false;
                    break;
                }
            }
            if(flag)
                    ans.push_back(x);
        }
        return ans;
    }
};