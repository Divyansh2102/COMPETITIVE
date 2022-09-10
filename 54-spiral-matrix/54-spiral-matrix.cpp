class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int>v;
        int r=m.size();
        int c=m[0].size();
        int sr=0,er=r-1,sc=0,ec=c-1;
        int co=0,total=r*c;
        while(co<total){
            for(int i=sc;i<=ec && co<total ;i++){
                v.push_back(m[sr][i]);
                co++;
            }
            sr++;
            for(int i=sr;i<=er && co<total;i++){
                v.push_back(m[i][ec]);
                co++;
            }
            ec--;
            for(int i=ec;i>=sc && co<total;i--){
                v.push_back(m[er][i]);
                co++;
            }
            er--;
            for(int i=er;i>=sr && co<total;i--){
                v.push_back(m[i][sc]);
                co++;
            }
            sc++;
        }
        return v;
    }
};