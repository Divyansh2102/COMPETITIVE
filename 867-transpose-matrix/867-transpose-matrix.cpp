class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
        int r=a.size();
        int c=a[0].size();
        vector<vector<int>>t_matrix(c,vector<int>(r,0));
        for(int i=0; i<r; ++i){
            for(int j=0; j<c; ++j) {
                t_matrix[j][i] = a[i][j];
            }
        }
        return t_matrix;
    }
};