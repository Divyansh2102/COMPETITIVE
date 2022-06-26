class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int res=0,cur=0;
        for(int i=0;i<k;i++)
            res+=c[i];
        cur=res;
        for(int i=k-1;i>=0;i--){
            cur-=c[i];
            cur+=c[c.size()-k+i];
            res=max(res,cur);
        }
        return res;
    }
};