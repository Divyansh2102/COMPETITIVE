class Solution {
public:
    int firstUniqChar(string s) {
        int mp[26]={0};
        for(int i=0;i<s.length();i++)
            mp[s[i]-97]++;
        for(int i=0;i<s.length();i++){
            if(mp[s[i]-97]==1)  return i;
        }
        return -1;
    }
};