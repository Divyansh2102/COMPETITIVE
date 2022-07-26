class Solution {
public:
    string toLowerCase(string s) {
        string str;
        int n=s.size();
        for(int i=0;i<n;i+=1){
            if(s[i]>=65 && s[i]<=90){
                s[i]+=32;
                str.push_back(s[i]);
            }
            else
                str.push_back(s[i]);
        }
        return str;
    }
};