class Solution {
public:
    int strStr(string x, string y) {
        if(y.size()>x.size())   return -1;
        for(int i=0;i<x.size();i++){
            if(x[i]==y[0]){
                int k=i,j;
                for(j=0;j<y.size();j++){
                    if(x[k]==y[j])k+=1;
                    else break;
                }
                if(j==y.size()) return i;
            }
        }
        return -1;
    }
};