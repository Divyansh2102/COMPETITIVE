class Solution {
    private boolean bsearch(int[] a,int target){
        int n=a.length;
        int i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(a[mid]==target)  return true;
            else if(a[mid]>target)  j=mid-1;
            else    i=mid+1;
        }
        return false;
    }
    public boolean searchMatrix(int[][] a, int target) {
        int n=a.length;
        int m=a[0].length;
        for(int i=0;i<n;i++){
            if(a[i][0]<=target && a[i][m-1]>=target)    return bsearch(a[i],target);
        }
        return false;
    }
}