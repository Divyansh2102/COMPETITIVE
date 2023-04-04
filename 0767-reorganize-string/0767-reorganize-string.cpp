class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(auto &i:s)   mp[i]++;
        priority_queue<pair<int,char>>pq;
        for(auto &i:mp){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(pq.size()>1){
            auto v1=pq.top();
            ans+=v1.second;
            v1.first-=1;
            pq.pop();
            auto v2=pq.top();
            ans+=v2.second;
            v2.first-=1;
            pq.pop();
            if(v1.first>0)  pq.push(v1);
            if(v2.first>0)  pq.push(v2);
        }
        if (!pq.empty()) {
            if(pq.top().first > 1)    return "";
            else    ans+=pq.top().second;
        }
        return ans;
    }
};
