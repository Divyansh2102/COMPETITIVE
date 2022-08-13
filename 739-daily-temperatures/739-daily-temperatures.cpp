class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>ans;
        stack<int>s;
        for(int i=t.size()-1;i>=0;i--){
            if(s.empty()){
                ans.push_back(0);
                s.push(i);
            }
            else{
                while(!s.empty() && t[s.top()]<=t[i])
                s.pop();
            if(s.empty()){
                ans.push_back(0);
                s.push(i);
            }
            else{
                ans.push_back(s.top()-i);
                s.push(i);
            }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};