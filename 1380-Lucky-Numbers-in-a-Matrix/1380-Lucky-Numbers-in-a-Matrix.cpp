class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int maxx,minn;
        vector<int>mini;
        vector<int>maxi;

        for(int i=0;i<n;i++){
            minn=INT_MAX;
            for(int j=0;j<m;j++){
                if(matrix[i][j]<minn)
                    minn=matrix[i][j];
            }
            mini.push_back(minn);
        }

        for(int i=0;i<m;i++){
            maxx=INT_MIN;
            for(int j=0;j<n;j++){
                if(matrix[j][i]>maxx)
                    maxx=matrix[j][i];
            }
            maxi.push_back(maxx);
        }

        vector<int>ans;
        for(int i=0;i<mini.size();i++){
            for(int j=0;j<maxi.size();j++){
                if(mini[i]==maxi[j]){
                    ans.push_back(mini[i]);
                }
            }
        }
        return ans;
    }
};