class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int x=i,c=0;
            for(int j=0;x>0;j++){
                if(x%2==1)  c+=1;
                x/=2;
            }
            ans.push_back(c);
        }
        return ans;
    }
};