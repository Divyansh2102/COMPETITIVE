class Solution {
public:
    vector<int>dx={-1,0,0,1};
    vector<int>dy={0,-1,1,0};
    void ans(vector<vector<int>>&img,int sr,int sc,int r,int c,int ac,int color){
        if(sr>=0 && sc>=0 && sr<r && sc<c && img[sr][sc]==ac){
            img[sr][sc]=color;
            for(int i=0;i<4;i++)
                ans(img,sr+dx[i],sc+dy[i],r,c,ac,color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color)    return image;
        int r=image.size(),c=image[0].size();
        ans(image,sr,sc,r,c,image[sr][sc],color);
        return image;
    }
};