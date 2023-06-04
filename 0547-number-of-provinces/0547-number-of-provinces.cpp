class Solution {
public:
    void dfs(int i,vector<bool>&vis,vector<int>adjl[]){
        vis[i]=true;
        for(auto x:adjl[i]){
            if(!vis[x]) dfs(x,vis,adjl);
        }
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int>adjl[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && adj[i][j]==1){
                    adjl[i].push_back(j);
                    adjl[j].push_back(i);
                }
            }
        }
        int c=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                c+=1;
                dfs(i,vis,adjl);
            }
        }
        return c;
    }
};