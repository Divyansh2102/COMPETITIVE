class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) {
        int i=0,j=t.size()-1;
        int c=0;
        if(t.size()==0)
            return 0;
        if(t.size()==1 && p<t[0])
            return 0;
        sort(t.begin(),t.end());
        while(i<=j){
            if(t[i]<=p){
                c++;
                p-=t[i];
                i++;
            }
            else{
                if(p+t[j]>=t[i] && c!=0 && i!=j){
                    c--;
                    p+=t[j--];
                }
                else
                    break;
            }
        }
        return c;
    }
};