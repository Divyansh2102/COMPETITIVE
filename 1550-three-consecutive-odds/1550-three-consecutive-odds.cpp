class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size(),i=0;
        while(i<=n-3){
            if(arr[i+2]%2==0)
                i+=3;
            else if(arr[i+1]%2==0)
                i+=2;
            else if(arr[i]%2==1)
                return true;
            else 
                i++;
        }
        return false;
    }
};