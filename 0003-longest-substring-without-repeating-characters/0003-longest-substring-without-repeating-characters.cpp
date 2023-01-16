class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")   return 0;
        unordered_map<char,int>mp;
        int i=0,j=0,n=s.length(),len=INT_MIN;
        while(j<n){
            if(mp[s[j]]>0){
                mp[s[i]]--;
                i+=1;
            }
            else{
                mp[s[j]]++;
                j+=1;
                len=max(len,j-i);
            }
            
        }
        return len;
    }
};