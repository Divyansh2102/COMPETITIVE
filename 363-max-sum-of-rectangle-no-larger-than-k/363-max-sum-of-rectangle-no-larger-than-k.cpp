class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& m, int k) {
        int res=INT_MIN,row=m.size(),col=m[0].size();
        for(int l=0;l<col;++l){
            vector<int>sum(row);
            for(int r=l;r<col;++r){
                for(int i=0;i<row;++i){
                    sum[i]+=m[i][r];
                }
                set<int>s{0};
                int r_sum=0;
                for(int su:sum){
                    r_sum+=su;
                auto it=s.lower_bound(r_sum-k);
                if(it!=end(s))
                    res=max(res,r_sum-*it);
                s.insert(r_sum);}
            }
        }
        return res;
    }
};