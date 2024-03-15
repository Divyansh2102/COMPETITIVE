class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int r=m.size();
        int c=m[0].size();
        int st=0,end=r*c-1;
        int mid=st+(end-st)/2;
        while(st<=end){
            int element=m[mid/c][mid%c];
            if(target==element)
                return 1;
            if(target<element)
                end=mid-1;
            else
                st=mid+1;
            mid=st+(end-st)/2;
        }
        return 0;
    }
};