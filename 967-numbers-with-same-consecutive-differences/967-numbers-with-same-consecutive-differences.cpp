class Solution {
public:
    int digit(int x){
        int count=0;
        while(x){
            count++;
            x/=10;
        }
        return count;
    }
    void find(int cur,int n,int k,vector<int>&ans){
        if(digit(cur)==n){
            ans.push_back(cur);
            return;
        }
        for(int i=0;i<10;i++){
            int last=cur%10;
            if(abs(last-i)==k)
                find((cur*10+i),n,k,ans);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>ans;
        for(int i=1;i<10;i++)
            find(i,n,k,ans);
        return ans;
    }
};