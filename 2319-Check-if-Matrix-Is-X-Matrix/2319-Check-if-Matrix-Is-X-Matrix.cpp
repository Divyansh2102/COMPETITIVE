class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int flag1=1,flag2=1;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                //diagonal checking
                if(i==j && grid[i][j]==0){
                    flag1=0;
                    break;
                }
                if(i+j==(n-1) && grid[i][j]==0){
                    flag1=0;
                    break;
                }

                if(i!=j && (i+j)!=n-1){
                    if(grid[i][j]!=0){
                        flag2=0;
                        break;
                    }
                }
            }
        }
        if(flag1 && flag2)
            return true;
        return false;
    }
};