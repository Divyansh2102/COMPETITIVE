/*
class Solution {
public:
    static bool comp(pair<int,int>x,pair<int,int>y){
        return x.first<y.first;
    }
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        if(k==0)
            return {};
        int n=a.size();
        if(n==1)
            return a;
       
        vector<int>sub(n,0);
        for(int i=0;i<n;i++)
            sub[i]=abs(a[i]-x);
        
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
            p.push_back(make_pair(sub[i],a[i]));
        sort(p.begin(),p.end(),comp);
        
        vector<int>v;
        int i=0;
        while(i<k){
            v.push_back(p[i].second);
            i++;
        }
        sort(v.begin(),v.end());
        return v;
    }
};
*/
class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        pair<int,int>p;
        int n=a.size();
        priority_queue<pair<int,int>>mh;
        if(k==0)
            return {};
        for(int i=0;i<n;i++){
            p={abs(a[i]-x),a[i]};
            mh.push(p);
        }
        while(mh.size()!=k)
            mh.pop();
        vector<int>ans;
        while(!mh.empty()){
            ans.push_back(mh.top().second);
            mh.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};