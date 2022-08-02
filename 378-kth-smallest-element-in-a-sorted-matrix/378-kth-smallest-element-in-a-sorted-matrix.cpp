class Solution {
public:
    int ans(vector<vector<int>>&m,int mid){
        int count=0,n=m.size(),i=n-1,j=0;
        while(i>=0 && j<n){
            if(m[i][j]>mid)
                i--;
            else{
                count+=i+1;
                j++;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& m, int k) {
        int n=m.size(),i=m[0][0],j=m[n-1][n-1];
        while(i<j){
            int mid=i+(j-i)/2;
            int pos=ans(m,mid);
            if(pos<k)
                i=mid+1;
            else
                j=mid;
        }
        return i;
     }
    
};