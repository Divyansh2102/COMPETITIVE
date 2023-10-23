class Solution {
public:
    bool isPowerOfFour(int n) {
        float x=n;
        if(n==1)
            return true;
        else{
            while(x>0){
                if(x==4)
                    return true;
                x=x/4.0;
            }
        }
        return false;
    }
};