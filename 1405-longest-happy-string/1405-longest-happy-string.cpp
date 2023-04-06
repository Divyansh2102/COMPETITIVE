class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if(a)   pq.push({a,'a'});
        if(b)   pq.push({b,'b'});
        if(c)   pq.push({c,'c'});
        string ans="";
        while(pq.size()>1){
            auto p1=pq.top();
            pq.pop();
            auto p2=pq.top();
            pq.pop();
            int f1=p1.first>=2?2:1;
            p1.first-=f1;
            int f2 = (p2.first>=2 and p2.first >= p1.first)? 2 : 1;
            string s1=string(f1,p1.second);
            string s2=string(f2,p2.second);
            ans+=s1+s2;
            p2.first-=f2;
            if(p1.first>0)  pq.push(p1);
            if(p2.first>0)  pq.push(p2);
        }
        if(!pq.empty()){
            auto x=pq.top();
            int f=x.first>=2?2:1;
            ans+=string(f,x.second);
        }
        return ans;
    }
};