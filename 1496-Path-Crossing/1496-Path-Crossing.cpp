class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>s;
        s.insert({0,0});
        int x=0,y=0;
        for(char c:path){
            if(c=='N')
                y++;
            else if(c=='S')
                y--;
            else if(c=='E')
                x++;
            else
                x--;
            if(s.find({x,y})!=s.end())
                return true;
            else
                s.insert({x,y});
        }
        return false;
    }
};