class Solution {
public:
    void dfs(int st,vector<int>adj[],vector<bool>&visited){
        visited[st]=true;
        for(auto x:adj[st]){
            if(!visited[x])    dfs(x,adj,visited);
        }
    }
    int makeConnected(int n, vector<vector<int>>& con) {
        int l=con.size();
        if(l<n-1)   return -1;
        vector<int>adj[n];
        for(auto i:con){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<bool>visited(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,adj,visited);
                c+=1;
            }
        }
        return c-1;
    }
};