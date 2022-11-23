class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size(),i,j;
        unordered_set<int>row;
        vector<unordered_set<int>>col(n);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                int val=matrix[i][j];
                if(val>=1 && val<=n){
                    if(row.find(val)!=row.end() || col[j].find(val)!=col[j].end())
                        return false;
                    else{
                        row.insert(val);
                        col[j].insert(val);
                    }
                }
                else 
                    return false;
            }
            row.clear();
        }   
        return true;
    }
};