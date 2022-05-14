class Solution {
private:
    int islandSize(vector<vector<int>> &grid, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid.at(i).size()) return 0;
        
        if(grid.at(i).at(j) == 0) return 0;
        
        grid.at(i).at(j) = 0;
        
        int top   = islandSize(grid, i - 1, j);
        int down  = islandSize(grid, i + 1, j);
        int left  = islandSize(grid, i, j - 1);
        int right = islandSize(grid, i, j + 1);
        
        return 1 + top + down + left + right;
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = INT_MIN;
        
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid.at(i).size(); j++)
                maxArea = max(maxArea, islandSize(grid, i, j));
        
        return maxArea;
    }
};