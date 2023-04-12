class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        int ans=0;
        if(a)   pq.push(a);
        if(b)   pq.push(b);
        if(c)   pq.push(c);
        while(!pq.empty()){
            auto x=pq.top();
            pq.pop();
            auto y=pq.top();
            pq.pop();
            if(x==0 || y==0)    break;
            ans+=1;
            pq.push(x-1);
            pq.push(y-1);
        }
        return ans;
    }
};