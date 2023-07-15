class Solution {
public:
    vector<int>dx{1,-1,0,0,-1,-1,1,1};
    vector<int>dy{0,0,-1,1,-1,1,-1,1};
    bool inRange(int i,int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m)  return false;
        return 1;
    }
    int dfs(vector<vector<int>>& board,vector<vector<int>>& ans,int i,int j,int n,int m){
        int c=0;
        for(int x=0;x<8;x++){
            if(inRange(i+dx[x],j+dy[x],n,m)){
                if(board[i+dx[x]][j+dy[x]]==1)  c+=1;
            }
        }
        return c;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
                 int c=dfs(board,ans,i,j,n,m);
                 if(board[i][j]==1 && c==2||c==3)   ans[i][j]=1;
                 if(board[i][j]==0 && c==3) ans[i][j]=1;
           }
       }
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++)   board[i][j]=ans[i][j];
       }
    }
};