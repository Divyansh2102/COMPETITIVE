class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& b) {
        unordered_map<int,int>mp;
        for(auto &i:b)  mp[i]++;
        priority_queue<pair<int,int>>pq;
        b.clear();
        for(auto &i:mp) pq.push({i.second,i.first});
        while(pq.size()>1){
            auto x=pq.top();
            pq.pop();
            b.push_back(x.second);
            x.first-=1;
            auto y=pq.top();
            pq.pop();
            b.push_back(y.second);
            y.first-=1;
            if(x.first>0)   pq.push(x);
            if(y.first>0)   pq.push(y);
        }
        if(!pq.empty()){
            b.push_back(pq.top().second);
        }
        return b;
    }
};