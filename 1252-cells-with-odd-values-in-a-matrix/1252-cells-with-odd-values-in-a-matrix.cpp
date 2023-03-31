class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& in) {
        int ans=0;
        vector<vector<int>>v(m,vector<int>(n,0));
        for(auto &i:in){
            int temp=i[0];
            for(int j=0;j<n;j++)    v[temp][j]+=1;
            temp=i[1];
            for(int j=0;j<m;j++)    v[j][temp]+=1;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]%2!=0)    ans+=1;
            }
        }
        return ans;
    }
};