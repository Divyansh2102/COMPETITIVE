class Solution {
public:
    vector<int>x={0,0,1,-1};
    vector<int>y={1,-1,0,0};
    int dfs(int i,int j,vector<vector<int>>&grid){
        if(i>=grid.size() || j>=grid[0].size() || i<0 || j<0 || grid[i][j]==0) return 1;
        if(grid[i][j]==-1) return 0;
        grid[i][j]=-1;
        return dfs(i+1,j,grid)+dfs(i-1,j,grid)+dfs(i,j+1,grid)+dfs(i,j-1,grid);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                    ans=dfs(i,j,grid);
            }
        }    
        return ans;
    }
};