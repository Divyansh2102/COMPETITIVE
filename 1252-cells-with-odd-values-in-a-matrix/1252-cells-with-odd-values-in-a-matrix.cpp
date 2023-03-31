class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& in) {
        int a=0;
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<in.size();i++){
                for(int k=in[i][0];k<=in[i][0];k++){
                    for(int q=0;q<n;q++)    ans[k][q]+=1;
                }
                
                for(int k=in[i][1];k<=in[i][1];k++){
                    for(int q=0;q<m;q++)    ans[q][k]+=1;
                } 
            
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<ans[i][j]<<"  ";
                if(ans[i][j]%2!=0)  a+=1;
            }
            cout<<endl;
        }
        return a;
    }
};