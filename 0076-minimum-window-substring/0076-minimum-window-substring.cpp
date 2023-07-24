class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(),m=t.size();
        if(m>n) return "";
        vector<int>v(256,0);
       
        int len=INT_MAX;
        int c=0;
        for(int i=0;i<m;i++){
            if(v[t[i]]==0)  c+=1;
            v[t[i]]++;
        }
        int i=0,j=0,st=0;
        while(j<n){
            v[s[j]]--;
            if(v[s[j]]==0)  c-=1;
            if(c==0){
                while(c==0){
                    if(j-i+1<len)   {len=j-i+1;st=i;}
                    v[s[i]]++;
                    if(v[s[i]]==1)  c+=1;
                    i+=1;
                }
            }
            j+=1;
        }
        if(len!=INT_MAX)    return s.substr(st,len);
        return "";
    }
};

