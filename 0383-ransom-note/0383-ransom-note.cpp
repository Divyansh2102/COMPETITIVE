class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto i:magazine)
            mp[i]++;
        for(int i=0;i<ransomNote.length();i++){
            if(mp[ransomNote[i]]==0)
                return false;
            mp[ransomNote[i]]--;
        }
        return true;
    }
};