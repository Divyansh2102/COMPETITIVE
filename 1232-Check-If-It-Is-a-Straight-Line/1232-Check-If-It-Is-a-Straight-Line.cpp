class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int x=c[1][0]-c[0][0];
        int y=c[1][1]-c[0][1];
        for(int i=2;i<c.size();i++){
            if(x*(c[i][1]-c[0][1])!=y*(c[i][0]-c[0][0]))
                return false;
        }
        return true;
    }
};