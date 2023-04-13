class Solution {
public:
    vector<int> minOperations(string b) {
        int n=b.length();
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            int ans=0;
            if(i<n-1){
                for(int j=i+1;j<n;j++){
                    if(b[j]=='1')   ans+=j-i;
                }
            }
            if(i>0){
                for(int j=i-1;j>=0;j--){
                    if(b[j]=='1')   ans+=abs(i-j);
                }
            }
            v[i]=ans;
        }
        return v;
    }
};