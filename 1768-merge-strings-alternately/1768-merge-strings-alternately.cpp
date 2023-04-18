class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string st="";
        int n=w1.length(),m=w2.length();
        int i=0,j=0,c=0;
        while(i<n&&j<m){
            if(c%2==0){
                st+=w1[i++];
                c++;
            }
            else{
                st+=w2[j++];
                c++;
            }
        }
        while(i<n){
                st+=w1[i++];
            }
        while(j<m){
            st+=w2[j++];
        }
        return st;
    }
};