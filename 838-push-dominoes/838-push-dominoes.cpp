class Solution {
public:
    string pushDominoes(string d) {
        int n=d.length();
        vector<int>v(n,0);
        int force=0;
        for(int i=0;i<n;i++){
            if(d[i]=='R')
                force=n;
            else if(d[i]=='L')
                force=0;
            else
                force=max(force-1,0);
            v[i]+=force;
        }
        force=0;
        for(int i=n-1;i>=0;i--){
            if(d[i]=='L')
                force=n;
            else if(d[i]=='R')
                force=0;
            else
                force=max(force-1,0);
            v[i]-=force;
        }
        string ans="";
        for(int i=0;i<v.size();i++){
            if(v[i]>0)
                ans+="R";
            else if(v[i]==0)
                ans+=".";
            else
                ans+="L";
        }
        return ans;
    }
};