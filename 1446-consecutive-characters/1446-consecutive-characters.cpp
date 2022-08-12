class Solution {
public:
    int maxPower(string s) {
        int power[s.size()];
        int n=s.size();
        power[0]=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])
                power[i]=power[i-1]+1;
            else
                power[i]=1;
        }
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            // cout<<power[i]<<" ";
            if(max<power[i])
                max=power[i];
        }
        // cout<<endl;
        return max;
    }
};