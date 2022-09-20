class Solution {
public:
    int findLength(vector<int>& n1, vector<int>& n2) {
        vector<vector<int>>v(n1.size()+1,vector<int>(n2.size()+1,0));
        int ans=0;
        for(int i=n1.size()-1;i>=0;i--){
            for(int j=n2.size()-1;j>=0;j--){
                if(n1[i]==n2[j]){
                    v[i][j]=v[i+1][j+1]+1;
                    if(ans<v[i][j])ans=v[i][j];
                }
            }
        }
        return ans;
    }
};