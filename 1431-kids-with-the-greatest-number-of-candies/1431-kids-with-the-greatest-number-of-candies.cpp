class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool>ans;
        int maxi=*max_element(c.begin(),c.end());
        for(int i=0;i<c.size();i++){
            if(c[i]+e>=maxi) ans.push_back(true);
            else    ans.push_back(false);
        }
        return ans;
    }
};