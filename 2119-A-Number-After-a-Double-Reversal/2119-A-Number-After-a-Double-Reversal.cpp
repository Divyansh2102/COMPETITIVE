class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num >= 0 && num <=9)
            return true;
        int x=num;
        int t=0;
        while(num){
            t=t*10+num%10;
            num/=10;
        }
        int z=0;
        while(t){
            z=z*10+(t%10);
            t/=10;
        }
        if(z==x)
            return true;
        return false;
    }
};