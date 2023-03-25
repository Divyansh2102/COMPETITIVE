class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int n=m.size();
        for(int i=0;i<n;i++){
            vector<bool>count(n+1);
            for(int j=0;j<n;j++){
                auto num=m[i][j];
                if(count[num])  return false;
                count[num]=true;
            }
        }
        for(int j=0;j<n;j++){
            vector<bool>count(n+1);
            for(int i=0;i<n;i++){
                auto num=m[i][j];
                if(count[num])  return false;
                count[num]=true;
            }
        }
        return true;
    }
};