class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        int size=edges.size();
        vector<vector<int>>graph(n);
        for(int i=0;i<size;i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        vector<int>visited(n,0);
        q.push(s);
        visited[s]=1;
        while(!q.empty()){
            int val=q.front();
            q.pop();
            if(val==d)
                return true;
            for(int i=0;i<graph[val].size();i++){
                if(visited[graph[val][i]]==0){
                    q.push(graph[val][i]);
                    visited[graph[val][i]]=1;
                }
            }
        }
        return false;
    }
};
