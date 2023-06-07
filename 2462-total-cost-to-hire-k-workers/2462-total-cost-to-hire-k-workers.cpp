class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        int i=0,n=costs.size();
        int j=n-1;
        long long sum=0;
        priority_queue<int,vector<int>,greater<int>>p1,p2;
        
        while(i<n && i<c){
            p1.push(costs[i++]);
        }
        while(j>=i && j>=n-c){
            p2.push(costs[j--]);
        }
        while(k--){
            if(p1.size() && p2.size()){
                if(p1.top()<p2.top()){
                    sum+=p1.top();
                    p1.pop();
                    if(i<=j)    p1.push(costs[i++]);
                }
                else if(p2.top()<p1.top()){
                    sum+=p2.top();
                    p2.pop();
                    if(j>=i)    p2.push(costs[j--]);
                }
                else{
                    sum+=p1.top();
                    p1.pop();
                    if(i<=j)    p1.push(costs[i++]);
                }
            }
            else if(p1.size()){
                sum+=p1.top();
                p1.pop();
                if(i<=j)    p1.push(costs[i++]);
            }
            else{
                sum+=p2.top();
                p2.pop();
                if(j>=i)    p2.push(costs[j--]);
            }
        }
        return sum;
    }
};