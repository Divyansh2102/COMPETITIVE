class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left=0,right=totalTrips*(long long)time[0],ans=right;
        int n=time.size();
        while(left<=right){
            long long mid=left+(right-left)/2;
            long long count=0;
            for(int i=0;i<n;i++)
                count+=mid/time[i];
            if(count>=totalTrips){
                ans=min(ans,mid);
                right=mid-1;
            }
            else
                left=mid+1;
        }
        return ans;
    }
};
