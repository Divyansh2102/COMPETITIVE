class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>mp;
        int n=arr.size();
        int n2=n;
        vector<int>v;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        for(auto i:mp)
            v.push_back(i.second);
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=v.size()-1;i>=0;i--){
            n2-=v[i];
            if(n2<=n/2){
                ans++;
                break;
            }
            else
                ans++;
            
        }
        return ans;
    }
};