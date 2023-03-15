class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        string c="";
        for(auto i:s1){
            if(i==' '){
                mp[c]++;
                c="";
            }
            else    c+=i;
        }
        mp[c]++;
        c="";
        for(auto i:s2){
            if(i==' '){
                mp[c]++;
                c="";
            }
            else    c+=i;
        }
        mp[c]++;
        vector<string>ans;
        for(auto i:mp){
            if(i.second==1) ans.push_back(i.first);
        }
        return ans;
    }
};
  
