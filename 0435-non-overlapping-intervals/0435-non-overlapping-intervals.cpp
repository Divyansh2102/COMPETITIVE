class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int c=0;
        int l=0,r=1,n=in.size();
        while(r<n){
            if(in[l][1]<=in[r][0]){
                l=r;
                r+=1;
            }
            else if(in[l][1]<=in[r][1]){
                c+=1;
                r+=1;
            }
            else{
                c+=1;
                l=r;
                r+=1;
            }
        }
        return c;
    }
};