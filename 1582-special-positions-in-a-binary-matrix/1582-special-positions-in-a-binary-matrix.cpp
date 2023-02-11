class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int ans=0;
        vector<int>oneR(n,0),oneC(m,0);
        for(int i=0;i<n;i++){
            int rc=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==0)
                    rc+=1;
            }
            oneR[i]=rc;
        }
        
        for(int i=0;i<m;i++){
            int cc=0;
            for(int j=0;j<n;j++){
                if(mat[j][i]==0)
                    cc+=1;
            }
            oneC[i]=cc;
        }
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(mat[i][j]){
                    if(oneR[i] == m-1 && oneC[j] == n-1) ans++;
                }
            }
        }
        return ans;
    }
};