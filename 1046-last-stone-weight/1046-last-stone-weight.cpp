class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        while(pq.size()!=1 && !pq.empty()){
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(y>x)
                pq.push(y-x);
        }
        if(pq.empty())  return 0;
        return pq.top();
    }
};