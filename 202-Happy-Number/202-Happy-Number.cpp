class Solution {
public:
    bool isHappy(int n) {
        while(n>4){
            int d=n,s=0;
            while(d>0){
                s+=pow((d%10),2);
                d/=10;
            }
            n=s;
        }
        return(n==1);
    }
};