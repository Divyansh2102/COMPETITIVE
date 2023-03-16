/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    unordered_map<int,Employee*>mp;
    int solve(int id){
        Employee*temp=mp[id];
        int ans=temp->importance;
        for(auto &s:temp->subordinates)     ans+=solve(s);
        return ans;
    }
    int getImportance(vector<Employee*> employees, int id) {
        for(auto e:employees)   mp[e->id]=e;
        return solve(id);
    }
};