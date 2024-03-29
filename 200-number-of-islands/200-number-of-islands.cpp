class Solution {
public:
    void mark(vector<vector<char>>&mat,int x,int y,int r,int c){
        if(x<0 || x>=r || y<0 || y>=c || mat[x][y]!='1')
            return;
        mat[x][y]='2';
        mark(mat,x+1,y,r,c);
        mark(mat,x-1,y,r,c);
        mark(mat,x,y+1,r,c);
        mark(mat,x,y-1,r,c);
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        if(r==0)
            return 0;
        int c=grid[0].size();
        int no_island=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    mark(grid,i,j,r,c);
                    no_island+=1;
                }
            }
        }
        return no_island;
    }
};