class Solution {
public:
    void setZeroes(vector<vector<int>>& mt) {
        int n=mt.size(),m=mt[0].size();
        int c=1;
        for(int i=0;i<n;i++){
            if(mt[i][0]==0)
                c=0;
            for(int j=1;j<m;j++){
                if(mt[i][j]==0)
                    mt[i][0]=mt[0][j]=0;
            }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=1;j--){
                if(mt[i][0]==0 || mt[0][j]==0)
                    mt[i][j]=0;
            }
            if(c==0)
                mt[i][0]=0;
        }
    }
};