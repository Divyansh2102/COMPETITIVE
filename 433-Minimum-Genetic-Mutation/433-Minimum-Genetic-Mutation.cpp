class Solution {
public:
    bool diff(string &a,string &b){
        if(a.size()!=b.size())
            return 0;
        int c=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i])
                c++;
        }
        if(c==1)
            return 1;
        return 0;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        int n=bank.size();
        map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(diff(bank[i],bank[j])){
                    mp[bank[i]].push_back(bank[j]);
                    mp[bank[j]].push_back(bank[i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(diff(bank[i],start)){
                mp[start].push_back(bank[i]);
                mp[bank[i]].push_back(start);
            }
        }
        queue<string>q;
        q.push(start);
        set<string>st;
        st.insert(start);
        int ans=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto node=q.front();
                q.pop();
                for(auto &e:mp[node]){
                    if(st.count(e)==0){
                        st.insert(e);
                        q.push(e);
                    }
                }
            }
            ans++;
            if(st.count(end)) return ans;
        }
        return -1;
    }
};