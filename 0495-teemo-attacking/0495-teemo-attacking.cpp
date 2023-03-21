class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) {
        int ans=0;
        for(int i=0;i<t.size()-1;i++){
            if(t[i]+d>t[i+1])   ans+=t[i+1]-t[i];
            else    ans+=d;
        }
        ans+=d;
        return ans;
    }
};