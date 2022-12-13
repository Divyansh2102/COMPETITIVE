class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int r=A.size(),c=r?A[0].size():0,i,j;
        int res=INT_MAX;
        if(r==0||c==0)
            return 0;
        for(i=1;i<r;i++){
            for(j=0;j<c;j++){
                int mn=A[i-1][j];
                if(j>0)
                    mn=min(mn,A[i-1][j-1]);
                if(j<c-1)
                    mn=min(mn,A[i-1][j+1]);
                A[i][j]+=mn;
            }
        }
        for(j=0;j<c;j++){
            res=min(res,A[r-1][j]);
        }
        return res;
    }
};