class Solution {
public:
    bool check(char c){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(check(s[i]) && check(s[j])){
                swap(s[i],s[j]);
                i++,j--;
            }
            else if(check(s[i]) && !check(s[j]))
                j--;
            else if(check(s[j]) && !check(s[i]))
                i++;
            else
                i++,j--;
        }
        return s;
    }
};