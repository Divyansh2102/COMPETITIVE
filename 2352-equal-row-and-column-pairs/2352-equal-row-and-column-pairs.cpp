class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        int n=grid.size();
        for(int i=0;i<n;i++)    mp[grid[i]]++;
        int sum=0;
        for(int i=0;i<n;i++){
            vector<int>c;
            for(int j=0;j<n;j++){
                c.push_back(grid[j][i]);
            }
            sum+=mp[c];
        }
        return sum;
    }
};