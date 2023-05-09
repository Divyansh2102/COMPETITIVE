class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        vector<int>v;
        int r=m.size();
        int c=m[0].size();
        int sr=0,er=r-1;
        int sc=0,ec=c-1;
        int temp=0,total=r*c;
        while(temp<total){
            for(int i=sc;i<=ec && total >temp ;i++){
                v.push_back(m[sr][i]);
                temp+=1;
            }
            sr++;
            for(int i=sr;i<=er && total>temp ;i++){
                v.push_back(m[i][ec]);
                temp+=1;
            }
            ec--;
            for(int i=ec;i>=sc && total>temp;i--){
                v.push_back(m[er][i]);
                temp+=1;
            }
            er--;
            for(int i=er;i>=sr && total>temp;i--){
                v.push_back(m[i][sc]);
                temp+=1;
            }
            sc++;
        }
        return v;
    }
};