class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>&v,int inc,int nc){
        int n=v.size();
        int m=v[0].size();
        if(i<0 || j<0)  return;
        if(i>=n || j>=m)    return;
        if(v[i][j]!=inc)    return;
        v[i][j]=nc;
        dfs(i-1,j,v,inc,nc);
        dfs(i+1,j,v,inc,nc);
        dfs(i,j-1,v,inc,nc);
        dfs(i,j+1,v,inc,nc);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int incolor=image[sr][sc];
        if(incolor!=color)
            dfs(sr,sc,image,incolor,color);
        return image;
    }
};