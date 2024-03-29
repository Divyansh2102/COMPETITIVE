class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int smallest=INT_MAX;
        int ans=-1;
        for(int i=0;i<points.size();i++){
            if(points[i][0]==x || points[i][1]==y){
                if((abs(x-points[i][0])+abs(y-points[i][1]))<smallest){
                    smallest=abs(x-points[i][0])+abs(y-points[i][1]);
                    ans=i;
                }
                else if((abs(x-points[i][0])+abs(y-points[i][1]))==smallest){
                    if(i<ans)
                        ans=i;
                }
            }
        }
        return ans;
    }
};