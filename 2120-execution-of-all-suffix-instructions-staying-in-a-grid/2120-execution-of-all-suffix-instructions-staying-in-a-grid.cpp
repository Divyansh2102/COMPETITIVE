class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& st, string s) {
        vector<int>ans;
        
        for(int i=0;i<s.length();i++){
            int r=st[0],c=st[1];
            string temp=s.substr(i);
            int cnt=0;
            for(auto j:temp){
                if(j=='R' && (c+1)<n){
                    cnt+=1,c+=1;
                }
                else if(j=='L' && (c-1)>=0){
                    cnt+=1,c-=1;
                }
                else if(j=='U' && (r-1)>=0){
                    cnt+=1,r-=1;
                }
                else if(j=='D' && (r+1)<n){
                    cnt+=1,r+=1;
                }
                else break;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};