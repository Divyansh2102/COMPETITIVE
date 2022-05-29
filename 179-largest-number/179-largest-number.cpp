class Solution {
public:
    static bool comp(string a,string b){
        string tempa=a+b;
        string tempb=b+a;
        return tempa>tempb;
    }
    bool allZero(vector<int>&n){
        for(int i=0;i<n.size();i++){
            if(n[i]!=0)
                return false;
        }
        return true;
    }
    string largestNumber(vector<int>& nums) {
        if(allZero(nums))
            return "0";
        int n=nums.size();
        string s[n];
        for(int i=0;i<n;i++)
            s[i]=to_string(nums[i]);
        sort(s,s+n,comp);
        string ans="";
        for(int i=0;i<n;i++)
            ans+=s[i];
        return ans;
    }
};