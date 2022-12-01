class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int v1=0,v2=0;
        for(int i=0,j=n/2;j<n;i++,j++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                v1+=1;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
                v2+=1;
        }
        if(v1==v2)
            return true;
        return false;
    }
};