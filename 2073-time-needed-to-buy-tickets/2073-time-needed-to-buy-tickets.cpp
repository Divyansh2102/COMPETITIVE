class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int c=0;
        while(t[k]!=0){
            for(int i=0;i<t.size();i++){
                if(t[i]!=0){
                    if(t[k]==0)
                        break;
                    t[i]-=1;
                    c++;
                }
            }
        }
        return c;
    }
};