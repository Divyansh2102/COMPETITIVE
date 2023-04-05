class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0,n=s.length();
        int ans=INT_MIN;
        while(j<n){
            if(mp[s[j]]>0){
                mp[s[i]]--;
                i+=1;
            }
            else{
                mp[s[j]]++;
                j+=1;
                ans=max(ans,j-i);
            }
        }
        return ans==INT_MIN?0:ans;
    }
};