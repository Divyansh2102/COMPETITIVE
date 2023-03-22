class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(auto &i:s)  mp[i]++;
        priority_queue<pair<int,char>>pq;
        for(auto &i:mp) pq.push({i.second,i.first});
        string ans="";
        while(pq.size()>1){
            auto t1=pq.top();
            pq.pop();
            auto t2=pq.top();
            pq.pop();
            ans+=t1.second;
            ans+=t2.second;
            t1.first-=1;
            t2.first-=1;
            if(t1.first>0)  pq.push(t1);
            if(t2.first>0)  pq.push(t2);
        }
        if(!pq.empty()){
            if(pq.top().first>1)    return "";
            else ans+=pq.top().second;
        }
        return ans;
    }
};