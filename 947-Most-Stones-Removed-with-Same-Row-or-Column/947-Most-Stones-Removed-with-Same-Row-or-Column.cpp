class Solution {
public:
    vector<int>parent;
    int find(int i){
        return parent[i]==i?i:parent[i]=find(parent[i]);
    }
    void unite(int i,int j){
        parent[find(i)]=find(j);
    }
    int removeStones(vector<vector<int>>& stones) {
        unordered_map<int,vector<int>>rowmap,colmap;
        for(int i=0;i<stones.size();i++){
            rowmap[stones[i][0]].push_back(i);
            colmap[stones[i][1]].push_back(i);
        }
        for(int i=0;i<stones.size();i++)
            parent.push_back(i);
        for(int i=0;i<stones.size();i++){
            for(auto j:rowmap[stones[i][0]]) unite(i,j);
            for(auto j:colmap[stones[i][1]]) unite(i,j);
        }
        unordered_set<int>unique;
        for(auto i:parent){
            unique.insert(find(i));
        }
        return stones.size()-unique.size();
    }
};