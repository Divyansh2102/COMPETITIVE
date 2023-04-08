class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int c=s.size();
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i+=1;
                j+=1;
                c-=1;
            }
            else    j+=1;
        }
        if(c==0)    return 1;
        return 0;
    }
};