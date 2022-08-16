class Solution {
public:
    int firstUniqChar(string s) {
        int hash[26]={0};
        for(int i=0;s[i]!='\0';i++){
            hash[s[i]-97]++;
        }
        for(int i=0;s[i]!='\0';i++){
            if(hash[s[i]-97]==1)
                return i;
        }
        return -1;
    }
};