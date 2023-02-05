class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.size(),m=s.size();
        if(n>m) return {};
        vector<int>ans;
        vector<int>m1(26,0),m2(26,0);
        for(int i=0;i<n;i++)
            m1[p[i]-'a']++;
        int i=0,j=0;
        while(i<m){
            m2[s[i]-'a']++;
            if(i>=n)    m2[s[j++]-'a']--;
            if(m1==m2)  ans.push_back(i-n+1);
            i++;
        }
        return ans;
    }
};