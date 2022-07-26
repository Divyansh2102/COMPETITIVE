class Solution {
public:
    string capitalizeTitle(string t) {
        int i=0,j=1,n=t.length();
        t[i]=tolower(t[i]);
        for(i=0;i<=n;i=i+j+1){
            j=0;
            while(t[i+j]!=' ' && t[i+j]!='\0'){
                t[i+j]=tolower(t[i+j]);
                j++;
            }
            if(j>2)
                t[i]=toupper(t[i]);
        }
        return t;
    }
};