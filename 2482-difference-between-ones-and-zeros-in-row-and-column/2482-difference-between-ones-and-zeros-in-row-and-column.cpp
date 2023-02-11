class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<int>oneR(n,0),oneC(m,0);
        for(int i=0;i<n;i+=1){
            int rc=0;
            for(int j=0;j<m;j+=1){
                if(grid[i][j]==1)
                    rc++;
            }
            oneR[i]=rc;
        }
        for(int i=0;i<m;i++){
            int cc=0;
            for(int j=0;j<n;j++){
                if(grid[j][i]==1)
                    cc++;
            }
            oneC[i]=cc;
        }
        
        vector<int>zR(n,0),zC(m,0);
        
        for(int i=0;i<n;i++)
            zR[i]=n-oneR[i];
        
        for(int i=0;i<m;i++)
            zC[i]=m-oneC[i];
        
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                ans[i][j]=oneR[i]+oneC[j]-zR[i]-zC[j];
        }
        return ans;
    }
};