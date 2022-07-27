class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& n1, vector<int>& n2) {
        map<int,int>a;
        map<int,int>b;
        vector<int>l1;
        vector<int>l2;
        vector<vector<int>>vec;
        for(auto i:n1)
            a[i]++;
        for(auto i:n2)
            b[i]++;
        for(auto i:a){
            if(i.second>=1 && !b[i.first])
                l1.push_back(i.first);
        }
        for(auto i:b){
            if(i.second>=1 && !a[i.first])
                l2.push_back(i.first);
        }
        vec.push_back(l1);
        vec.push_back(l2);
        return vec;
    }
};