class Solution {
public:
    int jobScheduling(vector<int>& s, vector<int>& e, vector<int>& p) {
        int n=s.size();
        vector<int>dp(n,0);
        vector<pair<int,pair<int,int>>>y(n);
        for(int i=0;i<n;i++){
            y[i].first=e[i];
            y[i].second.first=s[i];
            y[i].second.second=p[i];
        }
        sort(y.begin(),y.end());
        for(int i=0;i<n;i++){
            if(i==0){
                dp[0]=y[0].second.second;
                continue;
            }
            int f=0;
            for(int j=i-1;j>=0;j--){
                if(y[j].first<=y[i].second.first){
                    f=dp[j];
                    break;
                }
            }
            dp[i]=max(y[i].second.second+f,dp[i-1]);
        }
        return dp[n-1];
    }
};