class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>v(n+1,0);
        v[0]=0,v[1]=v[0]+gain[0];
        for(int i=1;i<n;i++){
            v[i+1]=gain[i]+v[i];
        }
        for(int i=0;i<n+1;i++)
            cout<<v[i]<<" ";
        sort(v.begin(),v.end());
        if(v[n]<0)
            return 0;
        return v[n];
    }
};