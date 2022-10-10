class Solution {
public:
    string breakPalindrome(string p) {
        int n=p.size();
        if(n==1)
            return "";
        int i=0;
        bool flag=false;
        while(i<n && !flag){
            if(p[i]!='a' && n!=2*i+1){
                p[i]='a';
                flag=true;
                break;
            }
            i++;
        }
        if(!flag)
            p[n-1]+=1;
        return p;
    }
};