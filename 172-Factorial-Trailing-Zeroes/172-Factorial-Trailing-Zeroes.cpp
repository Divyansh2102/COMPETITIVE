//Correct solution.
class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        for(long long i=5;n/i>0;i*=5){
            c+=n/i;
        }
        return c;
    }
};

/*
//The below code gives overflow.
class Solution {
public:
    vector<long long int>dp;
    int fact(int n){
        dp.resize(n+1,0);
        if(n>=0){
            dp[0]=1;
            for(int i=1;i<=n;i++){
                dp[i]=i*dp[i-1];
            }
        }
        return dp[n];
    }
    int trailingZeroes(int n) {
        long long int a=fact(n);
        int c=0;
        while(a){
            if(a%10==0){
                c++;
                a/=10;
            }
            else
                break;
        }
        return c;
    }
};
*/