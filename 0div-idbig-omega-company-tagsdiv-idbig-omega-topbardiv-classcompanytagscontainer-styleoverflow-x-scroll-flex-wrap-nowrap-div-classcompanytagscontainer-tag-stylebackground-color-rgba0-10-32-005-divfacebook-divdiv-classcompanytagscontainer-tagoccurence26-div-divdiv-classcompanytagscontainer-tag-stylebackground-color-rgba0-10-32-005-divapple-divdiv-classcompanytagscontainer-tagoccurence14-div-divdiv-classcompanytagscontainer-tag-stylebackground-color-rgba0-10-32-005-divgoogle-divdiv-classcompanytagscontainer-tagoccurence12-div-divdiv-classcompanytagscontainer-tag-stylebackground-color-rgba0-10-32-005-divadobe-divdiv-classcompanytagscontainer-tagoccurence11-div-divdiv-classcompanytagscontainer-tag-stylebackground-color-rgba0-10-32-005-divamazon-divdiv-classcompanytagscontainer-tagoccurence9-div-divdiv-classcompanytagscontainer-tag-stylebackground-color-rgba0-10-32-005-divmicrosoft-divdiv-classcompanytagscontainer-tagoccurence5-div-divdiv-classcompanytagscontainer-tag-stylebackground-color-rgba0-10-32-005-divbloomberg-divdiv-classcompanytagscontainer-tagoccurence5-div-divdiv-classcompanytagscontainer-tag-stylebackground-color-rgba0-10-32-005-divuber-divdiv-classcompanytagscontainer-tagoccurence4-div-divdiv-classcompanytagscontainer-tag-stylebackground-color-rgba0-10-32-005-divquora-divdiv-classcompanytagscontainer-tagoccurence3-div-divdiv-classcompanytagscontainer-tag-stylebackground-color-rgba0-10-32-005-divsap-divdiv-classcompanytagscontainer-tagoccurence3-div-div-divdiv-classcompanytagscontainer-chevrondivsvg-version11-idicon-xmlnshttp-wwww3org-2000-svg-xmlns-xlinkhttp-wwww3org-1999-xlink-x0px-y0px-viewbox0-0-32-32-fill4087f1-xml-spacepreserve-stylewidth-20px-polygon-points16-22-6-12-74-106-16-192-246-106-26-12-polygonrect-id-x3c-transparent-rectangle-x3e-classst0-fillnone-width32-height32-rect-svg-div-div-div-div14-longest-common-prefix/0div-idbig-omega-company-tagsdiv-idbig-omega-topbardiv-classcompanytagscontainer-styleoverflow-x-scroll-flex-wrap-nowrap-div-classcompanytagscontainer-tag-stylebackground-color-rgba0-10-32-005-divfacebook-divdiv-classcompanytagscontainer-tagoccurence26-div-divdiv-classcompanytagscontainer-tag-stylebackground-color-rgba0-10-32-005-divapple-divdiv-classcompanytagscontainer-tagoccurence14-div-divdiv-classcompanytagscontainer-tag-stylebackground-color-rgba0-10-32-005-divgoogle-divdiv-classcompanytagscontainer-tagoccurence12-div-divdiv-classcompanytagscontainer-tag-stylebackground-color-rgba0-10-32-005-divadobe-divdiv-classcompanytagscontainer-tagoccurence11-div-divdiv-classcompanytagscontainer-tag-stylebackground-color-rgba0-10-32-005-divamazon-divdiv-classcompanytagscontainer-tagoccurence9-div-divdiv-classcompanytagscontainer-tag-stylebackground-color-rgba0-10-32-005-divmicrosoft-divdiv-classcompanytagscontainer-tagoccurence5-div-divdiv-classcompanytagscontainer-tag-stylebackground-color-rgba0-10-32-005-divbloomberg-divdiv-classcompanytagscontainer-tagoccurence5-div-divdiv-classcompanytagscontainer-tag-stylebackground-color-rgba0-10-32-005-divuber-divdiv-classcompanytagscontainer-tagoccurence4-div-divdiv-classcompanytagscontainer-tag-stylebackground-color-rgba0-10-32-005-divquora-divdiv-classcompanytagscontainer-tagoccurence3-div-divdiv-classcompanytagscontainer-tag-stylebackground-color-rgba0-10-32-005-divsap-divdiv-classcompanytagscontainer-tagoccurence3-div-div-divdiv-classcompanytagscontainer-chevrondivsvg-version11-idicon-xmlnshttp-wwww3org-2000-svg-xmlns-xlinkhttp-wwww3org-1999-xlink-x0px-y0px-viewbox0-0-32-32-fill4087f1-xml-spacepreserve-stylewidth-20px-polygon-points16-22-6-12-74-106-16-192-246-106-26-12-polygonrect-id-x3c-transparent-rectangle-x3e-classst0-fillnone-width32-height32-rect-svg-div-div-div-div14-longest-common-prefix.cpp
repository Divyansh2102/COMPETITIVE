class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();   
        if(n==0)    return "";
        if(n==1)    return s[0];
        sort(s.begin(),s.end());
        int mini=min(s[0].size(),s[n-1].size());
        int i=0;
        string f=s[0],l=s[n-1];
        while(i<mini && f[i]==l[i])    i+=1;
        l=f.substr(0,i);
        return l;
    }
};