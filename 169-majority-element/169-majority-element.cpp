class Solution {
public:
    int majorityElement(vector<int>& a) {
        sort(a.begin(),a.end());
        int count=0;
        int n=a.size(),ans=0;
        for(int i=0;i<a.size();i++){
            if(count==0)
                ans=a[i];
            if(ans==a[i])
                count++;
            else
                count-=1;
        }
        return ans;
    }
};