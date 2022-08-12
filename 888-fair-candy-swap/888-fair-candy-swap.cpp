class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        int sum=0;
        int l=accumulate(A.begin(),A.end(),sum);
        int r=accumulate(B.begin(),B.end(),sum);
        int n=A.size(),m=B.size();
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int d=A[i]-B[j];
                if(l-d==r+d){
                    ans.push_back(A[i]);
                    ans.push_back(B[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};