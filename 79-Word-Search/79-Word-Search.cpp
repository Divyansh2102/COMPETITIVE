class Solution {
public:
    bool findW(vector<vector<char>>& board,int i,int j,int st,string &word,vector<vector<int>>&visited){
        if(st==word.length()-1) return true;
        visited[i][j]=true;
        if(i>0 && board[i-1][j]==word[st+1] && !visited[i-1][j] && findW(board,i-1,j,st+1,word,visited))    return true;
        if(j>0 && board[i][j-1]==word[st+1] && !visited[i][j-1] && findW(board,i,j-1,st+1,word,visited))    return true;
        if(i<board.size()-1 && board[i+1][j]==word[st+1] && !visited[i+1][j] && findW(board,i+1,j,st+1,word,visited))    return true;
        if(j<board[0].size()-1 && board[i][j+1]==word[st+1] && !visited[i][j+1] && findW(board,i,j+1,st+1,word,visited))    return true;
        visited[i][j]=false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size(),c=board[0].size();
        vector<vector<int>>visited(r,vector<int>(c,false));
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(board[i][j]==word[0] && findW(board,i,j,0,word,visited)) return true;
        return false;
    }
};