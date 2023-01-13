class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>temp(m,vector<int>(n,0));
        for(int i=m-1;i<m;i++){
            for(int j=0;j<n;j++)
                    temp[i][j]=1;
        }
        for(int i=0;i<m;i++){
            for(int j=n-1;j<n;j++)
                temp[i][j]=1;
        }
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                temp[i][j]=temp[i][j+1]+temp[i+1][j];
            }
        }
        return temp[0][0];
    }
};