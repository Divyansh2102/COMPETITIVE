class Solution {
public:
    string reverseVowels(string s) {
        string t="";
        for(auto &c:s){
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')    t+=c;
        }
        reverse(t.begin(),t.end());
        int x=0;
        for(auto &c:s){
            if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')    {
                c=t[x++];
            }
        }
        return s;
    }
};