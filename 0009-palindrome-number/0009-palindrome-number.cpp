class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int>temp;
        while(x){
            temp.push_back(x%10);
            x/=10;
        }
        vector<int>temp1=temp;
        reverse(temp1.begin(),temp1.end());
        return temp1==temp;
    }
};