class Solution {
public:
    int trap(vector<int>& h) {
        int s=h.size();
        if(s<1)
            return 0;
        vector<int>lm(s),rm(s);
        int ans=0;
        lm[0]=h[0];
        for(int i=1;i<s;i++)
            lm[i]=max(h[i],lm[i-1]);
        rm[s-1]=h[s-1];
        for(int i=s-2;i>=0;i--)
            rm[i]=max(h[i],rm[i+1]);
        for(int i=1;i<s-1;i++)
            ans+=min(lm[i],rm[i])-h[i];
        return ans;
    }
};
