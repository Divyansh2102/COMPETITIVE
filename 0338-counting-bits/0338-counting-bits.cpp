class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int x=i,c=0;
            while(x!=0){
                c+=x%2;
                x/=2;
            }
            ans.push_back(c);
        }
        return ans;
    }
};