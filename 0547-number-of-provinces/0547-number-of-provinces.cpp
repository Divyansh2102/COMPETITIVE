class Solution {
public:
    void dfs(int i,vector<int>&visited,vector<int>adjl[]){
        visited[i]=1;
        for(auto x:adjl[i]){
            if(!visited[x]){
                dfs(x,visited,adjl);
            }
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
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                c+=1;
                dfs(i,visited,adjl);
            }
        }
        return c;
    }
};