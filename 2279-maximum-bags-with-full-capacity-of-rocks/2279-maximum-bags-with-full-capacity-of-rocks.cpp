class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
        int count=0;
        for(int i=0;i<c.size();i++)
            c[i]-=r[i];
        sort(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            if(c[i]==0){
                count++;
                continue;
            }
            else{
                if(a>=c[i]){
                    a-=c[i];
                    count++;
                }
                else
                    break;
            }
        }
        return count;
    }
};