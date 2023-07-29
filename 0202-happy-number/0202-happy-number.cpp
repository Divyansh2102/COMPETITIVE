class Solution {
public:
    bool isHappy(int n) {
        while(n>4){
            long long int temp=n,s=0;
            while(temp>0){
                s+=pow(temp%10,2);
                temp/=10;
            }
            n=s;
        }
        return n==1;
    }
};