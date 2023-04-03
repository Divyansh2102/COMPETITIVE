class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(),p.end());
        int n=p.size();
        int c=0;
        int i=0,j=n-1;
        while(i<=j){
            if(i==j){
                c+=1;
                break;
            }
            if(p[i]+p[j]<=limit){
                i++;
            }
            j--;
            c+=1;
        }
        return c;
    }
};