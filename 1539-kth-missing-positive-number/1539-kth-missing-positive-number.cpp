class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(arr[0]>k)
            return k;
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int miss=arr[mid]-(mid+1);
            if(miss<k)
                low=mid+1;
            else
                high=mid-1;
        }
        low--;
        int miss=arr[low]-(low+1);
        return arr[low]+(k-miss);
    }
};