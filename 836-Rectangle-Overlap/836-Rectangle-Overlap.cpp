class Solution {
public:
    bool isRectangleOverlap(vector<int>& r1, vector<int>& r2) {
        int cx1=max(r2[0],r1[0]),cy1=max(r1[1],r2[1]);
        int cx2=min(r1[2],r2[2]),cy2=min(r1[3],r2[3]);
        int cl=cx2-cx1;
        int ch=cy2-cy1;
        if(cl>0 && ch>0)
            return true;
        return false;
    }
};