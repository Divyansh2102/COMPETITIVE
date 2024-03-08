class Solution {
    public void rotate(int[][] a) {
        int n=a.length;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int x=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=x;
            }
        }
        for(int i=0;i<n;i++){
            int st=0,end=n-1;
            while(st<end){
                int x=a[i][st];
                a[i][st]=a[i][end];
                a[i][end]=x;
                st+=1;
                end-=1;
            }
        }
        return;
    }
}