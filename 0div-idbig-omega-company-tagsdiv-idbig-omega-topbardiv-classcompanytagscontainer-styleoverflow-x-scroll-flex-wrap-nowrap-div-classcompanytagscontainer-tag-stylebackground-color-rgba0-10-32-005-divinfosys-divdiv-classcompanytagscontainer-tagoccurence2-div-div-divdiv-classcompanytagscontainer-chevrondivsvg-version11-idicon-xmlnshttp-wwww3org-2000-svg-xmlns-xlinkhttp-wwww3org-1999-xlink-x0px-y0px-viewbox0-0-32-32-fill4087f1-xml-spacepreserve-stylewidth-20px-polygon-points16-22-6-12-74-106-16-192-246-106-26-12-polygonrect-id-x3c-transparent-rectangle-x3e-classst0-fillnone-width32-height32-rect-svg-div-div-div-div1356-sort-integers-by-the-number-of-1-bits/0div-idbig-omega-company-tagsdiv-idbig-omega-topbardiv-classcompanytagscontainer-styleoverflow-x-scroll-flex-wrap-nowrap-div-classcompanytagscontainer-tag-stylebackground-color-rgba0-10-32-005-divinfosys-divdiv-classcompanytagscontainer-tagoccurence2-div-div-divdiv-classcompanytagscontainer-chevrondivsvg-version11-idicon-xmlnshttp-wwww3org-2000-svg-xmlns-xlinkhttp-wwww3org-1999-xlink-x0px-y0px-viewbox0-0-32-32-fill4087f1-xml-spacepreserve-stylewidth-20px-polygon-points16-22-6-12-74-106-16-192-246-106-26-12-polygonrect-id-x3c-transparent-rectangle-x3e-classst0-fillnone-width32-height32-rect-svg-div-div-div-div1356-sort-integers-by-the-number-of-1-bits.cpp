class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i];
            int cnt=0;
            while(temp>0){
                cnt+=temp&1;
                temp=temp>>1;
            }
            v.push_back({cnt,arr[i]});
        }
        sort(v.begin(),v.end());
        for(auto x:v)   ans.push_back(x.second);
        return ans;
    }
};