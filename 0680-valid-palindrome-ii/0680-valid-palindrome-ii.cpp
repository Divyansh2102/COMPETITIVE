class Solution {
public:
    bool istrue(string s,int i,int j){
        while(i<=j){
            if(s[i]==s[j]){
                i+=1,j-=1;
            }
            else return false;
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                i+=1;
                j-=1;
            }
            else{
                return istrue(s,i+1,j)||istrue(s,i,j-1);
            }
        }
        return 1;
    }
};