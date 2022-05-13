class Solution {
public:
    vector<int> dfsX = {-1,0,0,1};
    vector<int> dfsY = {0,-1,1,0};
    
    void help(vector<vector<int>>& image, int sr, int sc, int r, int c, int actColor, int newColor){
        if(sr >= 0 && sc >= 0 && sr < r && sc < c && image[sr][sc] == actColor){
            image[sr][sc] = newColor;
            for(int itr=0; itr<4; ++itr){
                help(image, sr + dfsX[itr], sc + dfsY[itr], r, c, actColor, newColor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] == newColor) return image;
        int r = image.size(), c = image[0].size();
        help(image, sr, sc, r, c, image[sr][sc], newColor);
        return image;
    }
};