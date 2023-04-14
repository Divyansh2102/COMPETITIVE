class Solution {
private:
    vector<int>x={-1,1,0,0};
    vector<int>y={0,0,-1,1};
    void dfs(int i,int j,vector<vector<char>>&grid,vector<vector<bool>>&visited){
        if(i>=0 && i<grid.size() && j>=0 && j<grid[0].size() && !visited[i][j] && grid[i][j]=='1'){
            visited[i][j]=1;
            for(int k=0;k<4;k++)    dfs(i+x[k],j+y[k],grid,visited);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs(i,j,grid,visited);
                    c+=1;
                }
                    
            }
        }
        return c;
    }
};