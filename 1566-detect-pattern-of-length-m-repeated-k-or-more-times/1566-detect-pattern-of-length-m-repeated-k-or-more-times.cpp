class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        int ans=0;
        for(int i=0;i+m<arr.size();i++){
            if(arr[i]==arr[i+m])
                ans++;
            if(arr[i]!=arr[i+m])
                ans=0;
            if(ans==m*(k-1))
                    return true;
        }
        return false;
    }
};