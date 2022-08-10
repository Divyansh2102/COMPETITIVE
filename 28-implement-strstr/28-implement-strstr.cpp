class Solution {
public:
    int strStr(string h, string n) {
        if(n.size()>h.size())
            return -1;
        for(int i=0;i<h.size();i+=1){
            if(h[i]==n[0]){
                int k=i,j;
                for(j=0;j<n.size();j++){
                    if(h[k]==n[j])
                        k++;
                    else
                        break;
                }
                if(j==n.size())
                    return i;
            }
        }
        return -1;
    }
};