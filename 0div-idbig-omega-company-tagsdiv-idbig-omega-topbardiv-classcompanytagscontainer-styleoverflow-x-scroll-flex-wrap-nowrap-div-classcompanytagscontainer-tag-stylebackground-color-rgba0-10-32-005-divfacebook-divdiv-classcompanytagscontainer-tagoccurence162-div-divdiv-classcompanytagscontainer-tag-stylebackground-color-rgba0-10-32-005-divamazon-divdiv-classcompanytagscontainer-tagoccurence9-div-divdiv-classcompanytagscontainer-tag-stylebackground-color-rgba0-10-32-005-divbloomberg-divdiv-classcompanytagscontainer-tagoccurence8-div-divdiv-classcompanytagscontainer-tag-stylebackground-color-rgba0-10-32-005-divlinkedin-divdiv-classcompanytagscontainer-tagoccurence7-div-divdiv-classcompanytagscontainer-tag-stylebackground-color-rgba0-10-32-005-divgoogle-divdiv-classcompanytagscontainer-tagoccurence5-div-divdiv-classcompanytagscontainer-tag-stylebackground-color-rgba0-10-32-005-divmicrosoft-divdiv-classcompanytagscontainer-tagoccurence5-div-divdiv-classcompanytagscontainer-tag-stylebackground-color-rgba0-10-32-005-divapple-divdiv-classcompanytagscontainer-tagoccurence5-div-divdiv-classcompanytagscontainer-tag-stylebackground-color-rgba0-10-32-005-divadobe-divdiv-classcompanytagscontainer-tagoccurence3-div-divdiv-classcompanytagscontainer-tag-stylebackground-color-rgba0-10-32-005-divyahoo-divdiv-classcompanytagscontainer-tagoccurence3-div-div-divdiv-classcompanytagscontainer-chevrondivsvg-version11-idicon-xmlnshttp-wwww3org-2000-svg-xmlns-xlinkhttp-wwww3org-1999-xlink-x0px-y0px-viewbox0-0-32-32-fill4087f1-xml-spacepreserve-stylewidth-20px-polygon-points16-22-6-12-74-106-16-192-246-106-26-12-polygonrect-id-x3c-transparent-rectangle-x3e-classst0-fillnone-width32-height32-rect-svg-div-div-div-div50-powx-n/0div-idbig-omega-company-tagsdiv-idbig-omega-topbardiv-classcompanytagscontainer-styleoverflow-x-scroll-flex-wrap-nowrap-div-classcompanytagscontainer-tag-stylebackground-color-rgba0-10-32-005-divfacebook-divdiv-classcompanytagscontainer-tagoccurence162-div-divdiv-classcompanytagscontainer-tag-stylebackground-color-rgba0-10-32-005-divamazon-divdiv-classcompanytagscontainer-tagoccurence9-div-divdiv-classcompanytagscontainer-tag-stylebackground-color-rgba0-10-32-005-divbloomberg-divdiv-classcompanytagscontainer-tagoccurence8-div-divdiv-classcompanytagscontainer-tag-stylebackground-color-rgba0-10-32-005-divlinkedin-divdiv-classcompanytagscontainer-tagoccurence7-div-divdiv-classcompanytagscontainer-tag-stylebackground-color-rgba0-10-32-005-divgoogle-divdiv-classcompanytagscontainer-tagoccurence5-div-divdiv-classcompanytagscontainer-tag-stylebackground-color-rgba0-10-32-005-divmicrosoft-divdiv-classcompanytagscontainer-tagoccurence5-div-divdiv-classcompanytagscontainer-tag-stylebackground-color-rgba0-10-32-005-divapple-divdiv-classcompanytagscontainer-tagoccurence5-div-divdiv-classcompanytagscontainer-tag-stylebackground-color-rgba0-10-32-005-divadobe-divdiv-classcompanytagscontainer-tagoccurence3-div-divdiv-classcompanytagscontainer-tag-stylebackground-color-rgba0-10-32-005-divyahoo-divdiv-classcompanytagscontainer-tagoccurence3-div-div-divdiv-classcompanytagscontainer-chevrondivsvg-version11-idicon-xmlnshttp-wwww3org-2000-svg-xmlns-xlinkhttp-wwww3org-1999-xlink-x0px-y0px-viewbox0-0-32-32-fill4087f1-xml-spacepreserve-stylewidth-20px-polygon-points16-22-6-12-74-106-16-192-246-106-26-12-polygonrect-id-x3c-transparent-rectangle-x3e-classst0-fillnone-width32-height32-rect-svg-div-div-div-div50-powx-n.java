class Solution {
    public double myPow(double x, int n) {
        double t=n;
        double ans=1.0;
        if(n<0) t*=-1;
        while(t>0){
            if(t%2==1){
                ans*=x;
                t-=1;
            }
            else{
                x*=x;
                t/=2;
            }
        };
        if(n<0) ans=1.0/ans;
        return ans;
    }
}