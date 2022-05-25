class Solution {
public:
    int maxArea(vector<int>& a) {
        int s=0,end=a.size()-1,maxA=0,hl,hr;
        while(s<end){
            maxA=max(maxA,min(hl=a[s],hr=a[end])*(hl<hr?end - s++: end-- - s));
        }
        return maxA;
    }
};