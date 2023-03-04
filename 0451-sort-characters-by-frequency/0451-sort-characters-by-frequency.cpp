class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>mp;
       for(auto i:s)
           mp[i]++;
        priority_queue<pair<int,char>,vector<pair<int,char>>>pq;
        for(auto i:mp)
            pq.push({i.second,i.first});
        s="";
        while(!pq.empty()){
            int x=pq.top().first;
            char y=pq.top().second;
            while(x--)
                s+=y;
            pq.pop();
        }
        return s;
    }
};
