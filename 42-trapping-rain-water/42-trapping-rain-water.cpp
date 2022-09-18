class Solution {
public:
    int trap(vector<int>& h) {
        if(h.empty())
            return 0;
        int ans=0;
        int s=h.size();
        vector<int>lm(s),rm(s);
        lm[0]=h[0];
        for(int i=1;i<s;i++)
            lm[i]=max(lm[i-1],h[i]);
        rm[s-1]=h[s-1];
        for(int i=s-2;i>=0;i--)
            rm[i]=max(rm[i+1],h[i]);
        for(int i=1;i<s-1;i++)
            ans+=min(rm[i],lm[i])-h[i];
        return ans;
    }
};