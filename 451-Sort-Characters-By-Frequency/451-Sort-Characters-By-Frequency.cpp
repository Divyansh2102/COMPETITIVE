class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char i:s)
            mp[i]++;
        priority_queue<pair<int,char>>pq;
        for(auto i:mp)
            pq.push({i.second,i.first});
        string ans="";
        while(!pq.empty()){
            auto temp=pq.top();
            int n=temp.first;
            char c=temp.second;
            ans+=string(n,c);
            pq.pop();
        }
        return ans;
    }
};