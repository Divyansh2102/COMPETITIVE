class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int n=m.size();
        vector<vector<int>>v=m;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=m[j][i];
            }
        }
        for(int i=0;i<n;i++){
            sort(m[i].begin(),m[i].end());
            sort(v[i].begin(),v[i].end());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(m[i][j]!=j+1)    return false;
                if(v[i][j]!=j+1)    return false;
            }
        }
        return true;
    }
};