class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ms(26,0);
        vector<int>mp(26,0);
        vector<int>ans;
        
        int ss=s.length(),sp=p.length();
        if(ss<sp)       return {};
        
        int i=0,j=0;
        while(j<sp){
            mp[p[j]-'a']++;
            ms[s[j++]-'a']++;
        }
        j-=1;
        
        while(j<ss){
            if(mp==ms)  ans.push_back(i);
            j+=1;
            if(j<ss)    ms[s[j]-'a']+=1;
            ms[s[i]-'a']-=1;
            i+=1;
        }
        return ans;
    }
};
