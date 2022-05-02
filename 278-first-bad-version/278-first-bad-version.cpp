// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int beg,end,mid,pos=1;
        beg=1,end=n;
        while(beg<=end){
            mid=beg+(end-beg)/2;
            bool x=isBadVersion(mid);
            if(x==true){
                pos=mid;
                end=mid-1;
            }
            else
                beg=mid+1;
        }
        return pos;
    }
};