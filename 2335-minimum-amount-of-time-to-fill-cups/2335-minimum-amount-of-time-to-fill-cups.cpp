class Solution {
public:
    int fillCups(vector<int>& a) {
        priority_queue<int>pq;
        for(int i=0;i<a.size();i++)
            pq.push(a[i]);
        int c=0;
        while(pq.top()!=0){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            a-=1;
            b-=1;
            c+=1;
            pq.push(a);
            pq.push(b);
        }
        return c;
    }
};