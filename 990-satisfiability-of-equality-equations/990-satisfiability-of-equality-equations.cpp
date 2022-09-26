class Solution {
public:
    vector<char>parent;
    char rfind(char x){
        return parent[x]==x?x:rfind(parent[x]);
    }
    bool equationsPossible(vector<string>& e) {
        parent.resize(26,0);
        for(int i=0;i<26;i++)
            parent[i]=i;
        for(auto s:e){
            if(s[1]=='='){
                char x=rfind(s[0]-'a');
                char y=rfind(s[3]-'a');
                if(x!=y)
                    parent[y]=x;
            }
        }
        for(auto s:e){
            if(s[1]=='!'){
                char x=rfind(s[0]-'a');
                char y=rfind(s[3]-'a');
                if(x==y)
                    return false;
            }
        }
        return true;
    }
};