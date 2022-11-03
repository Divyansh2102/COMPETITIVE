class Solution {
public:
    int longestPalindrome(vector<string>& w) {
        unordered_map<string,int>mp;
        for(auto i:w){
            mp[i]++;
        }
        int c=0;
        bool flag=false;
        for(auto i:w){
            string t=i;
            reverse(t.begin(),t.end());
            if(t!=i && mp[i]>0 && mp[t]>0){
                c+=4;
                mp[i]-=1;
                mp[t]-=1;
            }
            else if(t==i && mp[i]>1){
                c+=4;
                mp[i]-=2;
            }
            else if(t==i && !flag && mp[i]>0){
                c+=2;
                mp[i]-=1;
                flag=true;
            } 
        }
        return c;
    }
};