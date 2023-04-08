class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x!=0 && x%10==0)  return false;
        int flag=0;
        while(x>flag){
            flag=flag*10+x%10;
            x/=10;
        }
        return (x==flag || x==flag/10);
    }
};