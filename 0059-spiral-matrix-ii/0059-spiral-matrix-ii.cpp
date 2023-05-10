class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int sr=0,er=n-1,sc=0,ec=n-1;
        int temp=0,total=n*n;
        vector<vector<int>>ans(n,vector<int>(n,1));
        while(temp<total){
            for(int i=sc;i<=ec && temp<total;i++){
                ans[sr][i]=temp+ans[sr][i];
                temp+=1;
            }
            sr+=1;
            for(int i=sr;i<=er && temp<total;i++){
                ans[i][ec]=temp+ans[i][ec];
                temp+=1;
            }
            ec-=1;
            for(int i=ec;i>=sc && temp<total;i--){
                ans[er][i]=temp+ans[er][i];
                temp+=1;
            }
            er-=1;
            for(int i=er;i>=sr && temp<=total;i--){
                ans[i][sc]=temp+ans[i][sc];
                temp+=1;
            }
            sc++;
        }
        return ans;
    }
};