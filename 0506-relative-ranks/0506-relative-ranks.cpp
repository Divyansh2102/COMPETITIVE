class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int>pq;
        for(int i=0;i<score.size();i++)
            pq.push(score[i]);
        unordered_map<int,int>mp;
        int j=1;
        for(int i=0;i<score.size();i++){
            mp[pq.top()]=j++;
            pq.pop();
        }
        vector<string>ans(score.size());
        for(int i=0;i<score.size();i++){
            if(mp.find(score[i])!=mp.end()){
                if(mp[score[i]]>3)
                    ans[i]=to_string(mp[score[i]]);
                else if(mp[score[i]]==1)
                    ans[i]="Gold Medal";
                else if(mp[score[i]]==2)
                    ans[i]="Silver Medal";
                else
                    ans[i]="Bronze Medal";
            }
        }
        return ans;
    }
};