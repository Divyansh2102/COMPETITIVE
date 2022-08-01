class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> v( m , vector<int> (n, 0));
        for(int i=m-1;i<m;i++){
            for(int j=0;j<n;j++)
                v[i][j]=1;
        }
        for(int i=0;i<m;i++){
            for(int j=n-1;j<n;j++)
                v[i][j]=1;
        }
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--)
                v[i][j]=v[i][j+1]+v[i+1][j];
        }
        return v[0][0];
    }
};