class Solution {
public:
    int strStr(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if(m>n) return -1;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[0]){
                int j,k=i;
                for(j=0;j<m;j++){
                    if(s1[k]==s2[j])
                        k++;
                    else
                        break;
                }
                if(j==m)
                    return i;
            }
        }
        return -1;
    }
};