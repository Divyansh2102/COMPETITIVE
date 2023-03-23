class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,h=arr.size();
        while(l<h){
            int mid=l+(h-l)/2;
            if((arr[mid]-(mid+1))>=k) h=mid;
            else l=mid+1;
        }
        return l+k;
    }
};