class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string ans="";
        int i=0,j=0;
        while(i<w1.size() && j<w2.size()){
            ans+=w1[i++];
            ans+=w2[j++];
        }
        if(i<w1.size()){
            ans+=w1.substr(i);
        }
        if(j<w2.size()){
            ans+=w2.substr(j);
        }
        return ans;
    }
};